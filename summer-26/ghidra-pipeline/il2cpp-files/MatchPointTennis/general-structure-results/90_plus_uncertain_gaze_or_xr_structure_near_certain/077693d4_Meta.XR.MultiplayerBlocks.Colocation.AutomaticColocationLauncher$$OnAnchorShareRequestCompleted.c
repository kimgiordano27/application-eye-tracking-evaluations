/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 077693d4
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


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (long param_1,ulong param_2)

{
  long *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w19;
  long *unaff_x20;
  ulong unaff_x21;
  long lVar8;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    FUN_07769174(param_1,param_2);
    do {
      do {
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
        plVar4 = (long *)(*(code *)*puVar3)();
      } while (plVar4 == (long *)0x0);
      bVar2 = *(byte *)(*unaff_x25 + 0x130);
      if (*(byte *)(*plVar4 + 0x130) < bVar2) {
        plVar1 = (long *)0x0;
      }
      else {
        plVar1 = plVar4;
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x25) {
          plVar1 = (long *)0x0;
        }
      }
    } while (((plVar4 == (long *)0x0) || (plVar1 != (long *)0x0)) ||
            (lVar5 = thunk_FUN_04485110(plVar4,*unaff_x24), lVar5 == 0));
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
    lVar5 = (*(code *)*puVar3)();
    param_1 = 0;
    if (lVar5 != 0) {
      lVar8 = *unaff_x24;
      param_1 = thunk_FUN_04485110(lVar5,lVar8);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar5,lVar8);
      }
    }
    param_2 = unaff_x21 & 0xffffffff;
  } while( true );
}


