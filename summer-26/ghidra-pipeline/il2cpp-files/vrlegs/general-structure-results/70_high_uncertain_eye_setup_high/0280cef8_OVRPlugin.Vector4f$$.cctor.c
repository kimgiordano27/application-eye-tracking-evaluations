/*
FUNCTION_NAME: OVRPlugin.Vector4f$$.cctor
ENTRY_POINT: 0280cef8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Vector4f___cctor(void)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_x9;
  long *unaff_x19;
  int unaff_w20;
  
  puVar6 = PTR_DAT_03cc02b0;
  do {
    puVar5 = PTR_DAT_03cbedd0;
    uVar3 = *(uint *)((long)unaff_x19 + 0x8c);
    if (*(uint *)(in_x9 + 0x18) <= uVar3) {
LAB_0280d274:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar2 = *(ushort *)(in_x9 + (long)(int)uVar3 * 2 + 0x20);
    if (uVar2 < 0x4a) {
      if (uVar2 < 0xe) {
        if (uVar2 < 10) {
          if (uVar2 != 0) {
            if (uVar2 != 9) goto switchD_0280cf7c_caseD_21;
            goto switchD_0280cf7c_caseD_20;
          }
          uVar7 = FUN_0280d810();
          if ((uVar7 & 1) != 0) {
            if ((DAT_041252ed & 1) == 0) {
              FUN_01ab69ac(PTR_DAT_03cbebc0);
              DAT_041252ed = 1;
            }
            unaff_x19[3] = 0;
            *(undefined4 *)(unaff_x19 + 2) = 0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 3,0);
            return 0;
          }
        }
        else if (uVar2 == 10) {
          *(uint *)((long)unaff_x19 + 0x8c) = uVar3 + 1;
          *(uint *)(unaff_x19 + 0x12) = uVar3 + 1;
          *(int *)((long)unaff_x19 + 0x94) = *(int *)((long)unaff_x19 + 0x94) + 1;
        }
        else {
          if (uVar2 != 0xd) goto switchD_0280cf7c_caseD_21;
          FUN_0280da6c();
        }
      }
      else {
        switch(uVar2) {
        case 0x20:
switchD_0280cf7c_caseD_20:
          *(uint *)((long)unaff_x19 + 0x8c) = uVar3 + 1;
          break;
        default:
          goto switchD_0280cf7c_caseD_21;
        case 0x22:
        case 0x27:
          FUN_0280af38();
          uVar9 = FUN_0280dc34();
          return uVar9;
        case 0x2c:
          FUN_0280d930();
          break;
        case 0x2d:
          if ((int)unaff_x19[0x11] <= (int)(uVar3 + 1)) {
            uVar7 = FUN_0280ba8c();
            if ((uVar7 & 1) == 0) goto LAB_0280d068;
            in_x9 = unaff_x19[0x10];
            if (in_x9 == 0) goto LAB_0280d278;
          }
          uVar3 = *(int *)((long)unaff_x19 + 0x8c) + 1;
          if (*(uint *)(in_x9 + 0x18) <= uVar3) goto LAB_0280d274;
          if (*(short *)(in_x9 + (long)(int)uVar3 * 2 + 0x20) == 0x49) {
            uVar9 = FUN_0280de80();
            return uVar9;
          }
LAB_0280d068:
          FUN_0280defc();
                    /* WARNING: Could not recover jumptable at 0x0280d088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(*unaff_x19 + 0x198))();
          return uVar9;
        case 0x2e:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          if (unaff_w20 == 4) goto LAB_0280d068;
          goto LAB_0280d27c;
        case 0x2f:
          FUN_0280c700();
          break;
        case 0x49:
          uVar9 = FUN_0280e008();
          return uVar9;
        }
      }
    }
    else {
      if (0x5d < uVar2) {
        if (uVar2 != 0x66) {
          if (uVar2 == 0x6e) {
            FUN_0280d860();
            return 0;
          }
          if (uVar2 != 0x74) goto switchD_0280cf7c_caseD_21;
        }
        if (unaff_w20 == 4) {
          lVar8 = *(long *)PTR_DAT_03cbedd0;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar8 = *(long *)puVar5;
          }
          lVar1 = 8;
          if (uVar2 != 0x74) {
            lVar1 = 0x10;
          }
          uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + lVar1);
          uVar7 = FUN_0280df64();
          if ((uVar7 & 1) != 0) {
            FUN_02804374();
            return uVar9;
          }
          lVar8 = unaff_x19[0x10];
          iVar4 = *(int *)((long)unaff_x19 + 0x8c);
          FUN_018748a8(lVar8);
          FUN_019a7458(lVar8,(long)iVar4);
          goto LAB_0280d28c;
        }
LAB_0280d27c:
        *(uint *)((long)unaff_x19 + 0x8c) = uVar3 + 1;
LAB_0280d28c:
        uVar9 = FUN_0280d99c();
        uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfe168);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar9,uVar10);
      }
      if (uVar2 == 0x4e) {
        uVar9 = FUN_0280e084();
        return uVar9;
      }
      if (uVar2 == 0x5d) {
        *(uint *)((long)unaff_x19 + 0x8c) = uVar3 + 1;
        if ((*(int *)((long)unaff_x19 + 0x24) - 5U < 2) || (*(int *)((long)unaff_x19 + 0x24) == 8))
        {
          FUN_02804374();
          return 0;
        }
        goto LAB_0280d28c;
      }
switchD_0280cf7c_caseD_21:
      *(uint *)((long)unaff_x19 + 0x8c) = uVar3 + 1;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_026b63d8(uVar2,0);
      if ((uVar7 & 1) == 0) goto LAB_0280d28c;
    }
    in_x9 = unaff_x19[0x10];
  } while (in_x9 != 0);
LAB_0280d278:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


