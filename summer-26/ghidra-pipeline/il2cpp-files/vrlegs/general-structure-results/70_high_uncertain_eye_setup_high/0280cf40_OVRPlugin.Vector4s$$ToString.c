/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 0280cf40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Vector4s__ToString(long param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  int unaff_w20;
  uint uVar10;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  
code_r0x0280cf40:
  if ((bool)in_ZR) {
    *(int *)(unaff_x19 + 0x8c) = (int)param_1 + 1;
    goto LAB_0280cfcc;
  }
switchD_0280cf7c_caseD_21:
  do {
    *(int *)(unaff_x19 + 0x8c) = (int)param_1 + 1;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_026b63d8(unaff_w21,0);
    if ((uVar7 & 1) == 0) {
LAB_0280d28c:
      uVar6 = FUN_0280d99c();
      uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfe168);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar6,uVar8);
    }
LAB_0280cfcc:
    while( true ) {
      puVar5 = PTR_DAT_03cbedd0;
      lVar9 = *(long *)(unaff_x19 + 0x80);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = *(uint *)(unaff_x19 + 0x8c);
      param_1 = (long)(int)uVar3;
      if (*(uint *)(lVar9 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar2 = *(ushort *)(lVar9 + param_1 * 2 + 0x20);
      unaff_w21 = (uint)uVar2;
      uVar10 = (uint)uVar2;
      if (0x49 < uVar2) break;
      if (0xd < uVar10) {
        if (uVar10 - 0x20 < 0x2a) {
                    /* WARNING: Could not recover jumptable at 0x0280cf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*(code *)((ulong)*(byte *)(unaff_x22 + (ulong)(uVar10 - 0x20)) * 4 + 0x280cf80))
                            ();
          return uVar6;
        }
        goto switchD_0280cf7c_caseD_21;
      }
      if (uVar10 == 9 || uVar2 < 9) {
        if (uVar10 != 0) {
          in_ZR = uVar10 == 9;
          goto code_r0x0280cf40;
        }
        uVar7 = FUN_0280d810();
        if ((uVar7 & 1) != 0) {
          if ((DAT_041252ed & 1) == 0) {
            FUN_01ab69ac(PTR_DAT_03cbebc0);
            DAT_041252ed = 1;
          }
          *(undefined8 *)(unaff_x19 + 0x18) = 0;
          *(undefined4 *)(unaff_x19 + 0x10) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(unaff_x19 + 0x18),0);
          return 0;
        }
      }
      else if (uVar10 == 10) {
        *(uint *)(unaff_x19 + 0x8c) = uVar3 + 1;
        *(uint *)(unaff_x19 + 0x90) = uVar3 + 1;
        *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 1;
      }
      else {
        if (uVar10 != 0xd) goto switchD_0280cf7c_caseD_21;
        FUN_0280da6c();
      }
    }
    if (0x5d < uVar10) {
      if (uVar10 != 0x66) {
        if (uVar10 == 0x6e) {
          FUN_0280d860();
          return 0;
        }
        if (uVar10 != 0x74) goto switchD_0280cf7c_caseD_21;
      }
      if (unaff_w20 == 4) {
        lVar9 = *(long *)PTR_DAT_03cbedd0;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar9 = *(long *)puVar5;
        }
        lVar1 = 8;
        if (uVar10 != 0x74) {
          lVar1 = 0x10;
        }
        uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + lVar1);
        uVar7 = FUN_0280df64();
        if ((uVar7 & 1) != 0) {
          FUN_02804374();
          return uVar6;
        }
        uVar6 = *(undefined8 *)(unaff_x19 + 0x80);
        iVar4 = *(int *)(unaff_x19 + 0x8c);
        FUN_018748a8(uVar6);
        FUN_019a7458(uVar6,(long)iVar4);
      }
      else {
        *(uint *)(unaff_x19 + 0x8c) = uVar3 + 1;
      }
      goto LAB_0280d28c;
    }
    if (uVar10 == 0x4e) {
      uVar6 = FUN_0280e084();
      return uVar6;
    }
    if (uVar10 == 0x5d) {
      *(uint *)(unaff_x19 + 0x8c) = uVar3 + 1;
      if ((*(int *)(unaff_x19 + 0x24) - 5U < 2) || (*(int *)(unaff_x19 + 0x24) == 8)) {
        FUN_02804374();
        return 0;
      }
      goto LAB_0280d28c;
    }
  } while( true );
}


