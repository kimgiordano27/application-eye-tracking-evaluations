/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 0280e36c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_6;validity_or_gating_hits_11;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined2 OVRPlugin_EyeGazeState__get_IsValid(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  byte bVar5;
  undefined2 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int in_w8;
  long lVar13;
  long *unaff_x19;
  undefined8 in_stack_00000000;
  byte in_stack_00000008;
  undefined2 uStack000000000000000c;
  byte bStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  if (in_w8 == 8) {
    uVar8 = FUN_0280c344();
    puVar4 = PTR_DAT_03cc02b0;
    if ((uVar8 & 1) == 0) {
      lVar13 = unaff_x19[0x10];
      while( true ) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar2 = *(uint *)((long)unaff_x19 + 0x8c);
        if (*(uint *)(lVar13 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar1 = *(ushort *)(lVar13 + (long)(int)uVar2 * 2 + 0x20);
        if (0x39 < uVar1) break;
        switch(uVar1) {
        case 9:
        case 0x20:
          *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
          break;
        case 10:
          *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
          *(uint *)(unaff_x19 + 0x12) = uVar2 + 1;
          *(int *)((long)unaff_x19 + 0x94) = *(int *)((long)unaff_x19 + 0x94) + 1;
          break;
        case 0xb:
        case 0xc:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x21:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
switchD_0280e200_caseD_b:
          *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b63d8(uVar1,0);
          if ((uVar8 & 1) == 0) goto LAB_0280e598;
          break;
        case 0xd:
          FUN_0280da6c();
          break;
        case 0x22:
        case 0x27:
          FUN_0280af38();
          FUN_0282f680(unaff_x19 + 0x16,0);
          uVar6 = FUN_028058a0();
          return uVar6;
        case 0x2c:
          FUN_0280d930();
          break;
        case 0x2d:
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
          FUN_0280defc();
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x198))();
          puVar4 = PTR_DAT_03cc4168;
          if ((plVar7 == (long *)0x0) || (*plVar7 != *(long *)PTR_DAT_03cc4168)) {
            uVar10 = (**(code **)(*unaff_x19 + 0x198))();
            if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc41f8);
            }
            uVar11 = FUN_0271c480(0);
            if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc03b8);
            }
            bVar5 = FUN_0273b8d0(uVar10,uVar11,0);
          }
          else {
            puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
            uVar10 = *puVar9;
            uVar11 = puVar9[1];
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            bVar5 = FUN_02ce7704(uVar10,uVar11,0,0);
          }
          in_stack_00000008 = bVar5 & 1;
          thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeb20,&stack0x00000008);
          FUN_02804374();
          puVar9 = (undefined8 *)&stack0x00000018;
          uVar10 = *(undefined8 *)PTR_DAT_03cbffe8;
          bStack0000000000000018 = bVar5 & 1;
          goto LAB_0280e504;
        case 0x2f:
          FUN_0280c700();
          break;
        default:
          if (uVar1 != 0) goto switchD_0280e200_caseD_b;
          uVar8 = FUN_0280d810();
          if ((uVar8 & 1) != 0) {
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
        lVar13 = unaff_x19[0x10];
      }
      if (uVar1 < 0x67) {
        if (uVar1 != 0x5d) {
          if (uVar1 == 0x66) goto OVRPlugin_InsightPassthroughStyle2__CopyTo;
          goto switchD_0280e200_caseD_b;
        }
        *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
        if ((*(int *)((long)unaff_x19 + 0x24) - 5U < 2) || (*(int *)((long)unaff_x19 + 0x24) == 8))
        {
          FUN_02804374();
          return 0;
        }
      }
      else {
        if (uVar1 == 0x6e) {
          FUN_0280d860();
          return 0;
        }
        if (uVar1 != 0x74) goto switchD_0280e200_caseD_b;
OVRPlugin_InsightPassthroughStyle2__CopyTo:
        if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_0280df64();
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_02818a5c(0x66 < uVar1,0);
          FUN_02804374();
          puVar9 = (undefined8 *)((long)&stack0x00000018 + 4);
          uVar10 = *(undefined8 *)PTR_DAT_03cbffe8;
          uStack000000000000001c = 0x66 < uVar1;
LAB_0280e504:
          uStack000000000000000c = 0;
          FUN_02241190(&stack0x0000000c,puVar9,uVar10);
          return uStack000000000000000c;
        }
        lVar13 = unaff_x19[0x10];
        iVar3 = *(int *)((long)unaff_x19 + 0x8c);
        FUN_018748a8(lVar13);
        FUN_019a7458(lVar13,(long)iVar3);
      }
LAB_0280e598:
      uVar10 = FUN_0280d99c();
      goto OVRPlugin_OVRP_1_38_0__ovrp_Media_Shutdown;
    }
  }
  else {
    if (in_w8 != 0xc) {
      thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
      FUN_01876390();
      uVar10 = FUN_0271c480(0);
      in_stack_00000000._4_4_ = *(undefined4 *)((long)unaff_x19 + 0x24);
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cfe108);
      uVar11 = thunk_FUN_01a89a98(uVar11,(long)&stack0x00000000 + 4);
      uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03cfe110);
      FUN_0282f8b0(uVar12,uVar10,uVar11,0);
      uVar10 = FUN_02803d2c();
OVRPlugin_OVRP_1_38_0__ovrp_Media_Shutdown:
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cfe1b8);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar10,uVar11);
    }
    FUN_0280dad0();
  }
  return 0;
}


