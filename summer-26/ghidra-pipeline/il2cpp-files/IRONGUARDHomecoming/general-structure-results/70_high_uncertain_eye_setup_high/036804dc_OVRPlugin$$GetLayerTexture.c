/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 036804dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetLayerTexture(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__);
  *(undefined1 *)(unaff_x20 + 0xe4a) = 1;
  puVar1 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
  lVar10 = *(long *)(unaff_x19 + 0x58);
  if ((lVar10 != 0) && (plVar9 = *(long **)(unaff_x19 + 0x28), plVar9 != (long *)0x0)) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
          goto LAB_03680560;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                          ,0x12);
LAB_03680560:
    uVar7 = (*(code *)*puVar4)(plVar9,lVar10 + 0x34,puVar4[1]);
    lVar5 = lVar10;
    if ((uVar7 & 1) == 0) {
      lVar5 = 0;
    }
    if ((uVar7 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      lVar10 = *(long *)(unaff_x19 + 0x58);
      if ((lVar10 == 0) || (plVar9 = *(long **)(unaff_x19 + 0x38), plVar9 == (long *)0x0))
      goto LAB_03680794;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_036805f0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__
                            ,0);
LAB_036805f0:
      bVar2 = (*(code *)*puVar4)(plVar9,lVar10 + 0x18,puVar4[1]);
      lVar10 = lVar5;
    }
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x10) = bVar2 & 1;
      lVar10 = *(long *)(unaff_x19 + 0x58);
      if (lVar10 != 0) {
        if (*(char *)(lVar10 + 0x10) == '\0') {
          return;
        }
        plVar9 = *(long **)(unaff_x19 + 0x28);
        if (plVar9 != (long *)0x0) {
          lVar5 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_03680670;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_03680670:
          uVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
          *(undefined4 *)(lVar10 + 0x14) = uVar3;
          puVar1 = Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__;
          plVar9 = *(long **)(unaff_x19 + 0x48);
          if (plVar9 != (long *)0x0) {
            lVar10 = *plVar9;
            lVar5 = *(long *)(unaff_x19 + 0x58);
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)
                     Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__) {
                  puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
                  goto OVRPlugin__GetLayerAndroidSurfaceObject;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)
                     FUN_01ecb238(plVar9,*(long *)
                                          Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
                                  ,0);
OVRPlugin__GetLayerAndroidSurfaceObject:
            lVar10 = (*(code *)*puVar4)(plVar9,puVar4[1]);
            if ((lVar10 != 0) && (uVar3 = FUN_0407d7c4(lVar10,0), lVar5 != 0)) {
              *(undefined4 *)(lVar5 + 0x50) = uVar3;
              *(undefined4 *)(lVar5 + 0x54) = param_2;
              *(undefined4 *)(lVar5 + 0x58) = param_3;
              plVar9 = *(long **)(unaff_x19 + 0x48);
              if (plVar9 != (long *)0x0) {
                lVar10 = *plVar9;
                lVar5 = *(long *)(unaff_x19 + 0x58);
                uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                      puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_0368075c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_0368075c:
                lVar10 = (*(code *)*puVar4)(plVar9,puVar4[1]);
                if ((lVar10 != 0) && (uVar3 = FUN_0407d840(lVar10,0), lVar5 != 0)) {
                  *(undefined4 *)(lVar5 + 0x5c) = uVar3;
                  *(undefined4 *)(lVar5 + 0x60) = param_2;
                  *(undefined4 *)(lVar5 + 100) = param_3;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03680794:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


