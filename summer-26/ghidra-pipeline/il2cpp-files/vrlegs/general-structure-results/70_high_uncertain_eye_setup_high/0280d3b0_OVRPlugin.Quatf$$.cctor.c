/*
FUNCTION_NAME: OVRPlugin.Quatf$$.cctor
ENTRY_POINT: 0280d3b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Quatf___cctor(long *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar10;
  long lVar11;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined *puVar9;
  
  if ((DAT_04125320 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbfb98);
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    DAT_04125320 = 1;
  }
  FUN_0280bd34(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x24);
  if (0xc < uVar1) {
LAB_0280d79c:
    thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
    FUN_01876390();
    uVar6 = FUN_0271c480(0);
    uStack0000000000000008 = *(undefined4 *)((long)param_1 + 0x24);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfe108);
    uVar7 = thunk_FUN_01a89a98(uVar7,&stack0x00000008);
    puVar9 = PTR_DAT_03cfe110;
LAB_0280d7e0:
    uVar8 = thunk_FUN_01a6ca08(puVar9);
    uVar6 = FUN_0282f8b0(uVar8,uVar6,uVar7,0);
    uVar6 = FUN_02803d2c(param_1,uVar6);
LAB_0280d720:
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfe170);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar7);
  }
  if ((1 << (ulong)(uVar1 & 0x1f) & 0x665U) == 0) {
    if (uVar1 == 8) {
      uVar4 = FUN_0280c344(param_1,1);
      if ((uVar4 & 1) == 0) goto LAB_0280d410;
    }
    else {
      if (uVar1 != 0xc) goto LAB_0280d79c;
      FUN_0280dad0(param_1);
    }
    return 0;
  }
LAB_0280d410:
  puVar9 = PTR_DAT_03cc02b0;
  lVar11 = param_1[0x10];
  if (lVar11 != 0) {
    bVar2 = false;
    do {
      uVar1 = *(uint *)((long)param_1 + 0x8c);
      if (*(uint *)(lVar11 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar10 = *(ushort *)(lVar11 + (long)(int)uVar1 * 2 + 0x20);
      if (uVar10 < 0x28) {
        if (uVar10 < 0xe) {
          if (uVar10 < 10) {
            if (uVar10 != 0) {
              if (uVar10 != 9) goto LAB_0280d4bc;
              goto LAB_0280d4e8;
            }
            uVar4 = FUN_0280d810(param_1);
            if ((uVar4 & 1) != 0) {
              if ((DAT_041252ed & 1) == 0) {
                FUN_01ab69ac(PTR_DAT_03cbebc0);
                DAT_041252ed = 1;
              }
              param_1[3] = 0;
              *(undefined4 *)(param_1 + 2) = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 3,0);
              return 0;
            }
          }
          else if (uVar10 == 10) {
            *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
            *(uint *)(param_1 + 0x12) = uVar1 + 1;
            *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + 1;
          }
          else {
            if (uVar10 != 0xd) goto LAB_0280d4bc;
            FUN_0280da6c(param_1,0);
          }
        }
        else {
          if (uVar10 != 0x20) {
            if ((uVar10 != 0x22) && (uVar10 != 0x27)) goto LAB_0280d4bc;
            FUN_0280af38(param_1,uVar10,3);
            lVar11 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
            if (lVar11 == 0) {
              lVar5 = 0;
            }
            else {
              uVar6 = *(undefined8 *)PTR_DAT_03cbfb98;
              lVar5 = thunk_FUN_01a89d6c(lVar11,uVar6);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6ee0(lVar11,uVar6);
              }
            }
            if (!bVar2) {
              return lVar5;
            }
            FUN_02804e3c(param_1);
            iVar3 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
            if (iVar3 == 0xd) {
              FUN_02804374(param_1,0x11,lVar5,0);
              return lVar5;
            }
            thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
            FUN_01876390();
            uVar6 = FUN_0271c480(0);
            uStack000000000000000c =
                 (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
            uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfdce8);
            uVar7 = thunk_FUN_01a89a98(uVar7,(long)&stack0x00000008 + 4);
            puVar9 = PTR_DAT_03cfdd30;
            goto LAB_0280d7e0;
          }
LAB_0280d4e8:
          *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        }
      }
      else if (uVar10 < 0x5c) {
        if (uVar10 == 0x2c) {
          FUN_0280d930(param_1);
        }
        else if (uVar10 == 0x2f) {
          FUN_0280c700(param_1,0);
        }
        else {
          if (uVar10 == 0x5b) {
            *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
            FUN_02804374(param_1,2,0,1);
            lVar11 = FUN_02804e80(param_1);
            return lVar11;
          }
LAB_0280d4bc:
          *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar4 = FUN_026b63d8(uVar10,0);
          if ((uVar4 & 1) == 0) goto LAB_0280d71c;
        }
      }
      else {
        if (uVar10 != 0x7b) {
          if (uVar10 != 0x5d) {
            if (uVar10 == 0x6e) {
              FUN_0280d860(param_1);
              return 0;
            }
            goto LAB_0280d4bc;
          }
          *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
          if ((*(int *)((long)param_1 + 0x24) - 5U < 2) || (*(int *)((long)param_1 + 0x24) == 8)) {
            FUN_02804374(param_1,0xe,0,1);
            return 0;
          }
          uVar10 = 0x5d;
LAB_0280d71c:
          uVar6 = FUN_0280d99c(param_1,uVar10);
          goto LAB_0280d720;
        }
        *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        bVar2 = true;
        FUN_02804374(param_1,1,0,1);
        FUN_02804c70(param_1);
      }
      lVar11 = param_1[0x10];
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


