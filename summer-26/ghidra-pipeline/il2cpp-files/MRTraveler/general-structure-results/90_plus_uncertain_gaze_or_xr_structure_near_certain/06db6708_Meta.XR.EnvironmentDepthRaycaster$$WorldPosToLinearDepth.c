/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth
ENTRY_POINT: 06db6708
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__WorldPosToLinearDepth(undefined **param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  long *plVar7;
  long *plVar8;
  long unaff_x28;
  long in_stack_00000000;
  long in_stack_00000008;
  
  while (FUN_05212a24(unaff_x28,0,*(undefined8 *)param_1[0x169]), unaff_x19 != 0) {
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
      plVar7 = *(long **)(unaff_x22 + (long)(int)unaff_w20 * 8 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_06db67ec;
      plVar8 = (long *)*unaff_x25;
      uVar2 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
      if (plVar8 == (long *)0x0) goto LAB_06db67ec;
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06db64d0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar8,*unaff_x23,4);
LAB_06db64d0:
      uVar5 = (*(code *)*puVar3)(plVar8,uVar2,puVar3[1]);
    } while ((uVar5 & 1) != 0);
    (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    if (unaff_x21 == (long *)0x0) break;
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90340) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_06db6554;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06db6554:
    uVar5 = (*(code *)*puVar3)();
    uVar2 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    if ((uVar5 & 1) != 0) {
      uVar2 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90358,uVar2,0);
LAB_06db679c:
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
      }
      FUN_06dfdd34(uVar2,0);
      return 0;
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90348) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06db65d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06db65d4:
    (*(code *)*puVar3)();
    plVar8 = *(long **)(in_stack_00000008 + 0x18);
    uVar2 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    if (plVar8 == (long *)0x0) break;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90178) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_06db665c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e90178,8);
LAB_06db665c:
    uVar2 = (*(code *)*puVar3)(plVar8,uVar2,puVar3[1]);
    lVar4 = *unaff_x26;
    if (lVar4 == 0) {
      lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90338);
      FUN_04d5ef3c();
      *(long *)(unaff_x24 + 0x18) = lVar4;
      thunk_FUN_03d233cc();
    }
    uVar2 = FUN_04639e6c(uVar2,lVar4,*(undefined8 *)PTR_DAT_08e90330);
    unaff_x28 = FUN_0463775c(uVar2,*(undefined8 *)PTR_DAT_08e75bc8);
    if (unaff_x28 == 0) break;
    iVar1 = *(int *)(unaff_x28 + 0x18);
    uVar2 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
    if (iVar1 != 1) {
      uVar2 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e90360,uVar2,0);
      goto LAB_06db679c;
    }
    param_1 = &PTR_DAT_08e69000;
  }
LAB_06db67ec:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


