/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords
ENTRY_POINT: 06db6514
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


undefined8
Meta_XR_EnvironmentDepthRaycaster__WorldPosToNonNormalizedTextureCoords
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
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
  long *plVar7;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_06db6554;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06db6554:
      uVar3 = (*(code *)*puVar2)();
      uVar4 = (**(code **)(*unaff_x27 + 0x1e8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1f0));
      if ((uVar3 & 1) != 0) {
        uVar4 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90358,uVar4,0);
LAB_06db679c:
        if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
        }
        FUN_06dfdd34(uVar4,0);
        return 0;
      }
      lVar5 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90348) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06db65d4;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06db65d4:
      (*(code *)*puVar2)();
      plVar7 = *(long **)(in_stack_00000008 + 0x18);
      uVar4 = (**(code **)(*unaff_x27 + 0x1e8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1f0));
      if (plVar7 == (long *)0x0) {
LAB_06db67ec:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90178) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_06db665c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e90178,8);
LAB_06db665c:
      uVar4 = (*(code *)*puVar2)(plVar7,uVar4,puVar2[1]);
      lVar5 = *unaff_x26;
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90338);
        FUN_04d5ef3c();
        *(long *)(unaff_x24 + 0x18) = lVar5;
        thunk_FUN_03d233cc();
      }
      uVar4 = FUN_04639e6c(uVar4,lVar5,*(undefined8 *)PTR_DAT_08e90330);
      lVar5 = FUN_0463775c(uVar4,*(undefined8 *)PTR_DAT_08e75bc8);
      if (lVar5 == 0) goto LAB_06db67ec;
      iVar1 = *(int *)(lVar5 + 0x18);
      uVar4 = (**(code **)(*unaff_x27 + 0x1d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1e0));
      if (iVar1 != 1) {
        uVar4 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e90360,uVar4,0);
        goto LAB_06db679c;
      }
      FUN_05212a24(lVar5,0,*(undefined8 *)PTR_DAT_08e69b48);
      if (unaff_x19 == 0) goto LAB_06db67ec;
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
        plVar7 = (long *)*unaff_x25;
        uVar4 = (**(code **)(*unaff_x27 + 0x1d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1e0));
        if (plVar7 == (long *)0x0) goto LAB_06db67ec;
        lVar5 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_06db64d0;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_03cf1348(plVar7,*unaff_x23,4);
LAB_06db64d0:
        uVar3 = (*(code *)*puVar2)(plVar7,uVar4,puVar2[1]);
      } while ((uVar3 & 1) != 0);
      (**(code **)(*unaff_x27 + 0x1e8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1f0));
      if (unaff_x21 == (long *)0x0) goto LAB_06db67ec;
      param_1 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_08e90340;
    } while (in_x9 == 0);
  } while( true );
}


