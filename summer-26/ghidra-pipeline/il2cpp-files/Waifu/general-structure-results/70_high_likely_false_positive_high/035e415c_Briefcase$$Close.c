/*
FUNCTION_NAME: Briefcase$$Close
ENTRY_POINT: 035e415c
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Briefcase__Close(code *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float unaff_s8;
  undefined8 uVar14;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::get_speed()");
    *(code **)(unaff_x25 + 0xf18) = param_1;
  }
  fVar7 = (float)(*param_1)();
  if (DAT_086ef698 == (code *)0x0) {
    DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
  }
  fVar8 = (float)(*DAT_086ef698)();
  if (unaff_x20 == 0) goto LAB_035e4698;
  fVar7 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9) / fVar7 +
          DAT_012edbc0;
  if (DAT_086ec988 == (code *)0x0) {
    DAT_086ec988 = (code *)FUN_033d1b68(
                                       "UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)"
                                       );
  }
  fVar13 = DAT_012edd80;
  (*DAT_086ec988)(fVar7,DAT_012edd80);
  if (DAT_086f09e8 == (code *)0x0) {
    DAT_086f09e8 = (code *)FUN_033d1b68("UnityEngine.Input::GetMouseButton(System.Int32)");
  }
  uVar2 = (*DAT_086f09e8)(0);
  if ((uVar2 & 1) != 0) {
    fVar7 = *(float *)(unaff_x19 + 0x68);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar9 = (float)(*DAT_086ef698)();
    *(float *)(unaff_x19 + 0x68) = fVar7 + fVar9;
    fVar7 = *(float *)(unaff_x19 + 0x6c);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar9 = (float)(*DAT_086ef698)();
    fVar11 = *(float *)(unaff_x19 + 0x68);
    *(float *)(unaff_x19 + 0x6c) = fVar7 + fVar9;
    if (fVar13 <= fVar11) {
      lVar5 = *(long *)(unaff_x19 + 0x28);
      FUN_07a67b60(0);
      if (lVar5 == 0) goto LAB_035e4698;
      in_stack_00000088 = 0;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      FUN_079c82d0(&stack0x00000088,lVar5,2);
      in_stack_00000038 = in_stack_00000090;
      in_stack_00000030 = in_stack_00000088;
      in_stack_00000040 = in_stack_00000098;
      uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
      if (*(int *)(DAT_083cfcf8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000018 = in_stack_00000038;
      in_stack_00000010 = in_stack_00000030;
      uVar2 = FUN_07a80cbc(0x447a0000,&stack0x00000010,&stack0x00000050,uVar1,0);
      if ((uVar2 & 1) != 0) {
        if (*(char *)(unaff_x19 + 0x58) == '\0') {
          uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar2 = FUN_07a0d2c4(uVar6,0,0);
          fVar13 = in_stack_00000058;
          fVar7 = fStack0000000000000054;
          if ((uVar2 & 1) != 0) {
            uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
            if (DAT_086d7c56 == '\0') {
              FUN_0335b6c8(&DAT_083d2c90,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c56 = '\x01';
            }
            fVar11 = fVar7 + (float)((ulong)*(undefined8 *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x18)
                                    >> 0x20) * 0.5;
            fVar8 = fVar13 + *(float *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x20) * 0.5;
            if (DAT_086d7c53 == '\0') {
              FUN_0335b6c8(&DAT_083d0300,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c53 = '\x01';
            }
            FUN_035dcb1c(uVar6);
            *(undefined1 *)(unaff_x19 + 0x58) = 1;
          }
        }
        fVar9 = in_stack_00000058;
        fVar13 = fStack0000000000000054;
        fVar7 = fStack0000000000000050;
        pcVar3 = *(code **)(unaff_x22 + 0x188);
        if (pcVar3 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          *(code **)(unaff_x22 + 0x188) = pcVar3;
        }
        lVar5 = (*pcVar3)();
        if (lVar5 == 0) goto LAB_035e4698;
        fVar10 = (float)FUN_07a18d2c(lVar5,0);
        if (*(char *)(unaff_x23 + 0xff6) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x23 + 0xff6) = 1;
        }
        if (*(int *)(*(long *)(unaff_x24 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (1.0 < SQRT((fVar9 - fVar8) * (fVar9 - fVar8) +
                       (fVar7 - fVar10) * (fVar7 - fVar10) + (fVar13 - fVar11) * (fVar13 - fVar11)))
        {
          lVar5 = *(long *)(unaff_x19 + 0x40);
          if (lVar5 == 0) {
LAB_035e4698:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if (DAT_086ebef0 == (code *)0x0) {
            DAT_086ebef0 = (code *)FUN_033d1b68(
                                               "UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)"
                                               );
          }
          (*DAT_086ebef0)(lVar5,0);
          lVar5 = *(long *)(unaff_x19 + 0x40);
          if (lVar5 == 0) goto LAB_035e4698;
          if (DAT_086ebe78 == (code *)0x0) {
            DAT_086ebe78 = (code *)FUN_033d1b68(
                                               "UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)"
                                               );
          }
          (*DAT_086ebe78)(0x3f000000,lVar5);
          *(float *)(unaff_x19 + 0x5c) = fStack0000000000000050;
          *(float *)(unaff_x19 + 0x60) = fStack0000000000000054;
          *(float *)(unaff_x19 + 100) = in_stack_00000058;
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_035e4698;
          FUN_079989ac(*(long *)(unaff_x19 + 0x40),0);
        }
      }
      *(undefined4 *)(unaff_x19 + 0x68) = 0;
    }
  }
  if (DAT_086f09f8 == (code *)0x0) {
    DAT_086f09f8 = (code *)FUN_033d1b68("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
  }
  uVar2 = (*DAT_086f09f8)(0);
  if ((uVar2 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar2 = FUN_07a0d2c4(uVar6,0,0);
    if (((uVar2 & 1) != 0) && (1.0 < *(float *)(unaff_x19 + 0x6c))) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x5c);
      fVar7 = *(float *)(unaff_x19 + 100);
      if (DAT_086d7c56 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7c56 = '\x01';
      }
      uVar12 = *(undefined8 *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x18);
      fVar13 = *(float *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x20);
      fVar8 = (float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar12 >> 0x20) * 0.5;
      if (DAT_086d7c53 == '\0') {
        FUN_0335b6c8(&DAT_083d0300,1);
        DataMemoryBarrier(2,3);
        DAT_086d7c53 = '\x01';
      }
      puVar4 = *(undefined4 **)(DAT_083d0300 + 0xb8);
      FUN_035dcb1c(CONCAT44(fVar8,(float)uVar14 + (float)uVar12 * 0.5),fVar8,fVar7 + fVar13 * 0.5,
                   *puVar4,puVar4[1],puVar4[2],puVar4[3],0x3f800000,uVar6);
    }
    *(undefined1 *)(unaff_x19 + 0x58) = 0;
    *(undefined4 *)(unaff_x19 + 0x6c) = 0;
  }
  return;
}


