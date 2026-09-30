/*
FUNCTION_NAME: OVRPlugin.Posef$$ToString
ENTRY_POINT: 0280d400
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Posef__ToString(void)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint in_w8;
  int in_w9;
  long lVar11;
  long *unaff_x19;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined *puVar10;
  
  if ((in_w9 << (ulong)(in_w8 & 0x1f) & 0x665U) == 0) {
    if (in_w8 == 8) {
      uVar5 = FUN_0280c344();
      if ((uVar5 & 1) == 0) goto LAB_0280d410;
    }
    else {
      if (in_w8 != 0xc) {
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar7 = FUN_0271c480(0);
        uStack0000000000000008 = *(undefined4 *)((long)unaff_x19 + 0x24);
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfe108);
        uVar8 = thunk_FUN_01a89a98(uVar8,&stack0x00000008);
        puVar10 = PTR_DAT_03cfe110;
LAB_0280d7e0:
        uVar9 = thunk_FUN_01a6ca08(puVar10);
        FUN_0282f8b0(uVar9,uVar7,uVar8,0);
        uVar7 = FUN_02803d2c();
LAB_0280d720:
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfe170);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,uVar8);
      }
      FUN_0280dad0();
    }
    return 0;
  }
LAB_0280d410:
  puVar10 = PTR_DAT_03cc02b0;
  lVar11 = unaff_x19[0x10];
  if (lVar11 != 0) {
    bVar3 = false;
    do {
      uVar2 = *(uint *)((long)unaff_x19 + 0x8c);
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar1 = *(ushort *)(lVar11 + (long)(int)uVar2 * 2 + 0x20);
      if (uVar1 < 0x28) {
        if (uVar1 < 0xe) {
          if (uVar1 < 10) {
            if (uVar1 != 0) {
              if (uVar1 != 9) goto LAB_0280d4bc;
              goto LAB_0280d4e8;
            }
            uVar5 = FUN_0280d810();
            if ((uVar5 & 1) != 0) {
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
          else if (uVar1 == 10) {
            *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
            *(uint *)(unaff_x19 + 0x12) = uVar2 + 1;
            *(int *)((long)unaff_x19 + 0x94) = *(int *)((long)unaff_x19 + 0x94) + 1;
          }
          else {
            if (uVar1 != 0xd) goto LAB_0280d4bc;
            FUN_0280da6c();
          }
        }
        else {
          if (uVar1 != 0x20) {
            if ((uVar1 != 0x22) && (uVar1 != 0x27)) goto LAB_0280d4bc;
            FUN_0280af38();
            lVar11 = (**(code **)(*unaff_x19 + 0x198))();
            if (lVar11 == 0) {
              lVar6 = 0;
            }
            else {
              uVar7 = *(undefined8 *)PTR_DAT_03cbfb98;
              lVar6 = thunk_FUN_01a89d6c(lVar11,uVar7);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6ee0(lVar11,uVar7);
              }
            }
            if (!bVar3) {
              return lVar6;
            }
            FUN_02804e3c();
            iVar4 = (**(code **)(*unaff_x19 + 0x188))();
            if (iVar4 == 0xd) {
              FUN_02804374();
              return lVar6;
            }
            thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
            FUN_01876390();
            uVar7 = FUN_0271c480(0);
            uStack000000000000000c = (**(code **)(*unaff_x19 + 0x188))();
            uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfdce8);
            uVar8 = thunk_FUN_01a89a98(uVar8,(long)&stack0x00000008 + 4);
            puVar10 = PTR_DAT_03cfdd30;
            goto LAB_0280d7e0;
          }
LAB_0280d4e8:
          *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
        }
      }
      else if (uVar1 < 0x5c) {
        if (uVar1 == 0x2c) {
          FUN_0280d930();
        }
        else if (uVar1 == 0x2f) {
          FUN_0280c700();
        }
        else {
          if (uVar1 == 0x5b) {
            *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
            FUN_02804374();
            lVar11 = FUN_02804e80();
            return lVar11;
          }
LAB_0280d4bc:
          *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar5 = FUN_026b63d8(uVar1,0);
          if ((uVar5 & 1) == 0) goto LAB_0280d71c;
        }
      }
      else {
        if (uVar1 != 0x7b) {
          if (uVar1 != 0x5d) {
            if (uVar1 == 0x6e) {
              FUN_0280d860();
              return 0;
            }
            goto LAB_0280d4bc;
          }
          *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
          if ((*(int *)((long)unaff_x19 + 0x24) - 5U < 2) || (*(int *)((long)unaff_x19 + 0x24) == 8)
             ) {
            FUN_02804374();
            return 0;
          }
LAB_0280d71c:
          uVar7 = FUN_0280d99c();
          goto LAB_0280d720;
        }
        *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
        bVar3 = true;
        FUN_02804374();
        FUN_02804c70();
      }
      lVar11 = unaff_x19[0x10];
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


