/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosAtDepthTexCoord
ENTRY_POINT: 06db664c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__WorldPosAtDepthTexCoord(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int *in_x10;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *plVar6;
  long *unaff_x28;
  undefined8 unaff_x29;
  long lVar7;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x06db664c:
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 8) * 0x10 + 0x138);
  do {
    uVar3 = (*(code *)*puVar2)(unaff_x28,unaff_x29,puVar2[1]);
    lVar7 = *unaff_x26;
    if (lVar7 == 0) {
      lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90338);
      FUN_04d5ef3c();
      *(long *)(unaff_x24 + 0x18) = lVar7;
      thunk_FUN_03d233cc();
    }
    uVar3 = FUN_04639e6c(uVar3,lVar7,*(undefined8 *)PTR_DAT_08e90330);
    lVar7 = FUN_0463775c(uVar3,*(undefined8 *)PTR_DAT_08e75bc8);
    if (lVar7 == 0) goto LAB_06db67ec;
    iVar1 = *(int *)(lVar7 + 0x18);
    uVar3 = (**(code **)(*unaff_x27 + 0x1d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1e0));
    if (iVar1 != 1) {
      uVar3 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e90360,uVar3,0);
LAB_06db679c:
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
      }
      FUN_06dfdd34(uVar3,0);
      return 0;
    }
    FUN_05212a24(lVar7,0,*(undefined8 *)PTR_DAT_08e69b48);
    if (unaff_x19 == 0) {
LAB_06db67ec:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4e36c();
    do {
      unaff_w20 = unaff_w20 + 1;
      if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w20) {
        if (in_stack_00000000 != 0) {
          *(long *)(in_stack_00000000 + 0x30) = unaff_x19;
          thunk_FUN_03d233cc();
          return 1;
        }
        goto LAB_06db67ec;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      unaff_x27 = *(long **)(unaff_x22 + (long)(int)unaff_w20 * 8 + 0x20);
      if (unaff_x27 == (long *)0x0) goto LAB_06db67ec;
      plVar6 = (long *)*unaff_x25;
      uVar3 = (**(code **)(*unaff_x27 + 0x1d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1e0));
      if (plVar6 == (long *)0x0) goto LAB_06db67ec;
      lVar7 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_06db64d0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x23,4);
LAB_06db64d0:
      uVar4 = (*(code *)*puVar2)(plVar6,uVar3,puVar2[1]);
    } while ((uVar4 & 1) != 0);
    (**(code **)(*unaff_x27 + 0x1e8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1f0));
    if (unaff_x21 == (long *)0x0) goto LAB_06db67ec;
    lVar7 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08e90340) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_06db6554;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06db6554:
    uVar4 = (*(code *)*puVar2)();
    uVar3 = (**(code **)(*unaff_x27 + 0x1e8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1f0));
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90358,uVar3,0);
      goto LAB_06db679c;
    }
    lVar7 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08e90348) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06db65d4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06db65d4:
    (*(code *)*puVar2)();
    unaff_x28 = *(long **)(in_stack_00000008 + 0x18);
    unaff_x29 = (**(code **)(*unaff_x27 + 0x1e8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1f0));
    if (unaff_x28 == (long *)0x0) goto LAB_06db67ec;
    param_1 = *unaff_x28;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *(long *)PTR_DAT_08e90178) goto code_r0x06db664c;
        uVar4 = uVar4 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(unaff_x28,*(long *)PTR_DAT_08e90178,8);
  } while( true );
}


