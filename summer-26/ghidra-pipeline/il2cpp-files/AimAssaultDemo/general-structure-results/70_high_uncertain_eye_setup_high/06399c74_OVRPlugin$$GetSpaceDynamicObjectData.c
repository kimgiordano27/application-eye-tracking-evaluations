/*
FUNCTION_NAME: OVRPlugin$$GetSpaceDynamicObjectData
ENTRY_POINT: 06399c74
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceDynamicObjectData(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07d88078);
  FUN_0373b518(PTR_DAT_07d8ef28);
  FUN_0373b518(PTR_DAT_07d8ea38);
  FUN_0373b518(PTR_DAT_07d8eef0);
  FUN_0373b518(PTR_DAT_07d8ea48);
  *(undefined1 *)(unaff_x21 + 0x630) = 1;
  lVar8 = thunk_FUN_037788cc(*unaff_x22);
  FUN_04901508(lVar8,*unaff_x20);
  if (unaff_x19 == (long *)0x0) {
LAB_06399e38:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar9 = (**(code **)(*unaff_x19 + 0x288))();
  puVar5 = PTR_DAT_07d8ef28;
  puVar4 = PTR_DAT_07d8ea38;
  puVar3 = PTR_DAT_07d89e28;
  puVar2 = PTR_DAT_07d88078;
  do {
    if ((uVar9 & 1) == 0) {
      thunk_FUN_037a15ac(PTR_DAT_07db2430);
LAB_06399eac:
      uVar10 = FUN_062d5fcc();
      uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db6848);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar10,uVar11);
    }
    iVar6 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar6 != 5) {
      if (iVar6 != 7) {
        if (iVar6 == 0xe) {
          if (lVar8 != 0) {
            FUN_04903740(lVar8,*(undefined8 *)puVar4);
            return;
          }
          goto LAB_06399e38;
        }
        thunk_FUN_037a15ac(PTR_DAT_07d88078);
        FUN_031ae340();
        uVar10 = FUN_061d52c8(0);
        FUN_031a5e18();
        in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x238))();
        uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
        uVar11 = thunk_FUN_037784fc(uVar11,(long)&stack0x00000008 + 4);
        uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db6840);
        FUN_063349e4(uVar12,uVar10,uVar11,0);
        goto LAB_06399eac;
      }
      uVar10 = (**(code **)(*unaff_x19 + 0x248))();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar2);
      }
      uVar11 = FUN_061d52c8(0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar3);
      }
      uVar7 = FUN_061b2a94(uVar10,uVar11,0);
      if (lVar8 == 0) goto LAB_06399e38;
      lVar13 = *(long *)(lVar8 + 0x10);
      lVar14 = *(long *)puVar5;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_06399e38;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(char *)(lVar13 + (int)uVar1 + 0x20) = (char)uVar7;
      }
      else {
        FUN_04901d5c(lVar8,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    uVar9 = (**(code **)(*unaff_x19 + 0x288))();
  } while( true );
}


