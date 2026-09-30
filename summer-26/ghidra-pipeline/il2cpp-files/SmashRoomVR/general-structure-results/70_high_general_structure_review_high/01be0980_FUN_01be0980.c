/*
FUNCTION_NAME: FUN_01be0980
ENTRY_POINT: 01be0980
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_20;telemetry_or_network_hits_3
*/


void FUN_01be0980(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
                 long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_03fed2ac & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_105__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_16__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed2ac = 1;
  }
  if (param_5 != 0) {
    if (*(char *)(param_4 + 0x74) == '\0') {
      uVar5 = FUN_032a7cd8(param_5,1,0);
      puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_105__;
      if ((uVar5 & 1) != 0) {
        uVar2 = FUN_01e8a9f8(param_4,*(undefined8 *)
                                      Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_105__
                            );
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar5 = FUN_03923030(uVar2,0);
        if ((uVar5 & 1) != 0) {
          lVar4 = FUN_01e8a9f8(param_4,*(undefined8 *)puVar1);
          if (lVar4 == 0) goto LAB_01be0c50;
          FUN_01bdff98();
        }
        *(undefined1 *)(param_4 + 0x74) = 1;
      }
    }
    else {
      fVar10 = (float)FUN_032a7cf8(param_5,1,0);
      param_2 = DAT_00b5521c;
      if (fVar10 < DAT_00b5521c) {
        *(undefined1 *)(param_4 + 0x74) = 0;
      }
    }
    puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_16__;
    if ((param_6 != 0) && (plVar9 = *(long **)(param_6 + 0xa0), plVar9 != (long *)0x0)) {
      lVar4 = *plVar9;
      lVar8 = *(long *)(param_4 + 0x28);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_16__) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_01be0ae4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ae9f78(plVar9,*(long *)
                                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_16__
                            ,0);
LAB_01be0ae4:
      lVar4 = (*(code *)*puVar3)(plVar9,6,puVar3[1]);
      if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) &&
         (FUN_03928d34(*(long *)(lVar4 + 0x18),0), lVar8 != 0)) {
        FUN_03928dd4(lVar8,0);
        plVar9 = *(long **)(param_6 + 0xa0);
        if (plVar9 != (long *)0x0) {
          lVar8 = *plVar9;
          lVar7 = *(long *)(param_4 + 0x28);
          lVar4 = *(long *)puVar1;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_01be0b70;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ae9f78(plVar9,lVar4,0);
LAB_01be0b70:
          lVar4 = (*(code *)*puVar3)(plVar9,6,puVar3[1]);
          if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
            fVar10 = (float)FUN_03928d34(*(long *)(lVar4 + 0x18),0);
            plVar9 = *(long **)(param_6 + 0xa0);
            if (plVar9 != (long *)0x0) {
              lVar8 = *plVar9;
              lVar4 = *(long *)puVar1;
              uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
              fVar12 = param_2;
              fVar13 = param_3;
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == lVar4) {
                    puVar3 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_01be0bf4;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined8 *)FUN_01ae9f78(plVar9,lVar4,0);
LAB_01be0bf4:
              lVar4 = (*(code *)*puVar3)(plVar9,0,puVar3[1]);
              if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
                fVar11 = (float)FUN_03928d34(*(long *)(lVar4 + 0x18),0);
                FUN_039148b4(fVar10 - fVar11,param_2 - fVar12,param_3 - fVar13,0);
                if (lVar7 != 0) {
                  FUN_03928f54(lVar7,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01be0c50:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


