/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_CreateSpatialAnchor
ENTRY_POINT: 01db9e88
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_72_0__ovrp_CreateSpatialAnchor(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x9;
  int *piVar8;
  int *in_x10;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_01db9ebc;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar5 = (undefined8 *)FUN_0103c348(unaff_x23,param_3,0);
LAB_01db9ebc:
      (*(code *)*puVar5)(unaff_x23);
      while( true ) {
        while( true ) {
          while( true ) {
            do {
              unaff_w22 = unaff_w22 + 1;
              if (unaff_w22 == unaff_w28) {
                if (DAT_0247da80 == '\0') {
                  FUN_00fdc2e4(PTR_DAT_0234bc90);
                  DAT_0247da80 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
                  thunk_FUN_01022c14();
                }
                return;
              }
              plVar3 = (long *)FUN_018985f8();
            } while (plVar3 == (long *)0x0);
            FUN_01898668();
            lVar6 = *plVar3;
            plVar1 = plVar3;
            if (lVar6 != *unaff_x29) {
              plVar1 = (long *)0x0;
            }
            if (plVar1 == (long *)0x0) break;
            lVar6 = *unaff_x27;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01022c14();
              lVar6 = *unaff_x27;
            }
            uVar4 = FUN_00fdc2fc(lVar6);
            OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar1,unaff_w21,uVar4);
          }
          bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
          if ((*(byte *)(lVar6 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0235a790
             )) break;
          (**(code **)(lVar6 + 0x178))(plVar3);
        }
        lVar6 = *unaff_x26;
        unaff_x23 = (long *)thunk_FUN_0103ffe0(plVar3,lVar6);
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar3,lVar6);
        }
        if (unaff_w21 != 0) break;
        lVar6 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_01db9e30;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0103c348(unaff_x23,*unaff_x26,1);
LAB_01db9e30:
        uVar7 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
        if ((uVar7 & 1) == 0) break;
        uVar4 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
        FUN_01dbb700(uVar4,unaff_x23);
        FUN_01dab44c(uVar4,0);
      }
      param_1 = *unaff_x23;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
}


