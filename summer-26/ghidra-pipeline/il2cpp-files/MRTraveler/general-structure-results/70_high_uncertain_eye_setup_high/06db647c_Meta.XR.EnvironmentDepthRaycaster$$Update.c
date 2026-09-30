/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Update
ENTRY_POINT: 06db647c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__Update(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *plVar7;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    lVar4 = *unaff_x28;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_06db64d0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(unaff_x28,*unaff_x23,4);
LAB_06db64d0:
    uVar5 = (*(code *)*puVar2)(unaff_x28,param_1,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*unaff_x27 + 0x1e8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1f0));
      if (unaff_x21 == (long *)0x0) goto LAB_06db67ec;
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90340) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06db6554;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06db6554:
      uVar5 = (*(code *)*puVar2)();
      uVar3 = (**(code **)(*unaff_x27 + 0x1e8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1f0));
      if ((uVar5 & 1) != 0) {
        uVar3 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90358,uVar3,0);
LAB_06db679c:
        if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
        }
        FUN_06dfdd34(uVar3,0);
        return 0;
      }
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90348) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06db65d4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06db65d4:
      (*(code *)*puVar2)();
      plVar7 = *(long **)(in_stack_00000008 + 0x18);
      uVar3 = (**(code **)(*unaff_x27 + 0x1e8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1f0));
      if (plVar7 == (long *)0x0) goto LAB_06db67ec;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90178) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_06db665c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e90178,8);
LAB_06db665c:
      uVar3 = (*(code *)*puVar2)(plVar7,uVar3,puVar2[1]);
      lVar4 = *unaff_x26;
      if (lVar4 == 0) {
        lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90338);
        FUN_04d5ef3c();
        *(long *)(unaff_x24 + 0x18) = lVar4;
        thunk_FUN_03d233cc();
      }
      uVar3 = FUN_04639e6c(uVar3,lVar4,*(undefined8 *)PTR_DAT_08e90330);
      lVar4 = FUN_0463775c(uVar3,*(undefined8 *)PTR_DAT_08e75bc8);
      if (lVar4 == 0) goto LAB_06db67ec;
      iVar1 = *(int *)(lVar4 + 0x18);
      uVar3 = (**(code **)(*unaff_x27 + 0x1d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1e0));
      if (iVar1 != 1) {
        uVar3 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e90360,uVar3,0);
        goto LAB_06db679c;
      }
      FUN_05212a24(lVar4,0,*(undefined8 *)PTR_DAT_08e69b48);
      if (unaff_x19 == 0) goto LAB_06db67ec;
      FUN_06a4e36c();
    }
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
    unaff_x28 = (long *)*unaff_x25;
    param_1 = (**(code **)(*unaff_x27 + 0x1d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1e0));
    if (unaff_x28 == (long *)0x0) {
LAB_06db67ec:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  } while( true );
}


