/*
FUNCTION_NAME: NAudio.Wave.WaveInEvent$$Dispose
ENTRY_POINT: 05db0324
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05db01dc) */

undefined8 NAudio_Wave_WaveInEvent__Dispose(long param_1,long *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x05db0324:
  plVar5 = (long *)(**(code **)(param_1 + 0x1a8))(param_2,*(undefined8 *)(param_1 + 0x1b0));
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
    if (plVar5 != (long *)0x0) {
      auVar8 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      _in_stack_00000018 = auVar8;
      uVar6 = NAudio_CoreAudioApi_AudioSessionManager_SessionCreatedDelegate___ctor
                        (&stack0x00000018,*(undefined8 *)PTR_DAT_07a13158,0);
      lVar7 = FUN_05daff2c();
      iVar2 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
      if ((iVar2 == -1) && (lVar7 != 0)) {
        FUN_05c98b2c(*(undefined8 *)PTR_DAT_07a13180,uVar6,lVar7,0);
      }
      else {
        FUN_05c8e390(*(undefined8 *)PTR_DAT_07a13160,uVar6,0);
      }
LAB_05db03f0:
      uVar3 = (**(code **)(*unaff_x24 + 0x178))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180));
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar3);
      thunk_FUN_0367fa58(*(undefined8 *)(unaff_x19 + 0x48),&stack0x00000010);
LAB_05db0418:
      FUN_05ca5e18();
      do {
        while( true ) {
          unaff_w23 = unaff_w23 + 1;
          iVar2 = (**(code **)(*unaff_x22 + 0x178))();
          if (iVar2 <= unaff_w23) {
            return 1;
          }
          param_2 = (long *)(**(code **)(*unaff_x22 + 0x188))();
          if (param_2 == (long *)0x0) goto LAB_05db0478;
          uVar6 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
          uVar4 = FUN_05d493f4(uVar6,0,0);
          if ((uVar4 & 1) != 0) break;
          (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
          FUN_05db047c();
          if (in_stack_00000028._4_1_ == '\0') {
            iVar2 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
            if (iVar2 == -1) {
              in_stack_00000010 = param_2[3];
              thunk_FUN_0367fa58(*(undefined8 *)(unaff_x19 + 0x68),&stack0x00000010);
              in_stack_00000008._4_4_ =
                   (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
              thunk_FUN_0367fa58(*(undefined8 *)(unaff_x19 + 0x48),(long)&stack0x00000008 + 4);
              if (unaff_x21 == 0) goto LAB_05db0478;
              FUN_05ca5e18();
              if ((int)param_2[4] != 0xffffff) {
                in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)param_2[4]);
                thunk_FUN_0367fa58(*(undefined8 *)(unaff_x19 + 0x50),&stack0x00000010);
                goto LAB_05db02d8;
              }
            }
            else {
              uVar3 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
              in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar3);
              thunk_FUN_0367fa58(*(undefined8 *)(unaff_x19 + 0x48),&stack0x00000010);
              if (unaff_x21 == 0) goto LAB_05db0478;
LAB_05db02d8:
              FUN_05ca5338();
            }
            lVar7 = FUN_05daf5fc(param_2);
            if (lVar7 == 0) goto LAB_05db0478;
            sVar1 = FUN_05c91ffc(lVar7,0,0);
            unaff_x24 = param_2;
            if (sVar1 != 0x3c) goto LAB_05db03f0;
            param_1 = *param_2;
            goto code_r0x05db0324;
          }
        }
        FUN_05e5edb8(0);
        if (unaff_x21 == 0) break;
        FUN_05ca401c();
        FUN_05ca401c();
        if (param_2[8] == 0) goto LAB_05db0208;
        FUN_05ca401c();
      } while( true );
    }
  }
LAB_05db0478:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
LAB_05db0208:
  in_stack_00000010 = param_2[3];
  thunk_FUN_0367fa58(*(undefined8 *)(unaff_x19 + 0x68),&stack0x00000010);
  in_stack_00000008._4_4_ =
       (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
  thunk_FUN_0367fa58(*(undefined8 *)(unaff_x19 + 0x48),(long)&stack0x00000008 + 4);
  goto LAB_05db0418;
}


