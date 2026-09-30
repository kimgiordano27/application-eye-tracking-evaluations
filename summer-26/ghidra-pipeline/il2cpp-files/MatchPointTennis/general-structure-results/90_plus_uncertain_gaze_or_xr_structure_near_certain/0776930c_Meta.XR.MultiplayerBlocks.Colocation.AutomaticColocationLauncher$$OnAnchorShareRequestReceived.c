/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 0776930c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
               (long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long lVar8;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    if (param_1 != (long *)0x0) {
      bVar2 = *(byte *)(*unaff_x25 + 0x130);
      if (*(byte *)(*param_1 + 0x130) < bVar2) {
        plVar1 = (long *)0x0;
      }
      else {
        plVar1 = param_1;
        if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x25) {
          plVar1 = (long *)0x0;
        }
      }
      if (((param_1 != (long *)0x0) && (plVar1 == (long *)0x0)) &&
         (lVar5 = thunk_FUN_04485110(param_1,*unaff_x24), lVar5 != 0)) {
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_077693ac;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac();
LAB_077693ac:
        lVar4 = (*(code *)*puVar3)();
        lVar5 = 0;
        if (lVar4 != 0) {
          lVar8 = *unaff_x24;
          lVar5 = thunk_FUN_04485110(lVar4,lVar8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4(lVar4,lVar8);
          }
        }
        FUN_07769174(lVar5,unaff_w21);
      }
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_077692a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_077692a0:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) {
      if (unaff_w19 == 0) {
        **(undefined1 **)(*(long *)PTR_DAT_09f30dc8 + 0xb8) = 0;
      }
      return;
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_07769300;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_07769300:
    param_1 = (long *)(*(code *)*puVar3)();
  } while( true );
}


