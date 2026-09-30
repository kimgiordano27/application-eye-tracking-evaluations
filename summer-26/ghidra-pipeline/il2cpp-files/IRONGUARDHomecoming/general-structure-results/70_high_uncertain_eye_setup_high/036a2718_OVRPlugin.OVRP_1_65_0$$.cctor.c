/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$.cctor
ENTRY_POINT: 036a2718
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0___cctor(ulong param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x21;
  undefined8 *puVar9;
  long *plVar10;
  
  puVar9 = *(undefined8 **)(unaff_x21 + 0xb20);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_69__);
    thunk_FUN_01efb3a4(Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_Encode__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_70__);
    *(undefined1 *)(unaff_x20 + 0xf79) = 1;
  }
  FUN_02a774c8(param_2,*puVar9);
  if ((*(long *)(param_2 + 0x48) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_2 + 0x48) + 0x88), lVar8 != 0)) {
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_2 + 0x78);
    thunk_FUN_01f51358();
    plVar10 = *(long **)(param_2 + 0x68);
    if (plVar10 != (long *)0x0) {
      lVar4 = *plVar10;
      uVar1 = *(undefined4 *)(param_2 + 0x50);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_70__)
          {
            puVar9 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_036a27dc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_70__
                            ,0);
LAB_036a27dc:
      uVar3 = (*(code *)*puVar9)(plVar10,uVar1,puVar9[1]);
      *(undefined8 *)(lVar8 + 0x20) = uVar3;
      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20),uVar3);
      if (*(char *)(param_2 + 0x54) != '\0') {
        lVar8 = FUN_040703d4(param_2,0);
        if ((lVar8 == 0) ||
           (lVar8 = FUN_02336dec(lVar8,*(undefined8 *)
                                        Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_Encode__
                                ), lVar8 == 0)) goto LAB_036a287c;
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar2) {
          uVar7 = 0;
          do {
            if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar4 = *(long *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_036a287c;
            FUN_0404c858(lVar4,0,0);
            uVar2 = *(uint *)(lVar8 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar2);
        }
      }
      return;
    }
  }
LAB_036a287c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


