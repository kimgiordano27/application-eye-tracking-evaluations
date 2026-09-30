/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$ComputeRoomInfo
ENTRY_POINT: 0147c7c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0147cb0c) */
/* WARNING: Removing unreachable block (ram,0x0147caf8) */

int Meta_XR_MRUtilityKit_MRUKRoom__ComputeRoomInfo(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined **in_x9;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w29;
  double dVar6;
  float fVar7;
  double dVar8;
  float unaff_s9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  int in_stack_00000018;
  undefined1 uStack000000000000001c;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 uStack0000000000000038;
  undefined7 uStack0000000000000039;
  
  do {
    iVar2 = unaff_w23 + 0xff;
    if (-1 < unaff_w23) {
      iVar2 = unaff_w23;
    }
    uStack000000000000001c = (undefined1)((uint)iVar2 >> 8);
    thunk_FUN_00d61fa0(*(undefined8 *)in_x9[299],&stack0x0000001c);
    FUN_01794eec();
LAB_0147c800:
    unaff_w19 = unaff_w19 + 1;
    if (unaff_w20 == unaff_w19) {
LAB_0147c810:
      iVar5 = *(int *)(unaff_x25 + 0x48);
      iVar2 = *(int *)(unaff_x25 + 0x4c) + unaff_w29;
      in_stack_00000018 = unaff_w29 + in_stack_00000018;
      unaff_w22 = unaff_w22 - unaff_w29;
      *(long *)(unaff_x25 + 0x38) = *(long *)(unaff_x25 + 0x38) + (long)unaff_w29;
      *(int *)(unaff_x25 + 0x4c) = iVar2;
      if (iVar2 != iVar5) goto LAB_0147c84c;
      *(undefined4 *)(unaff_x25 + 0x48) = 0;
      do {
        if (*(char *)(unaff_x25 + 0x19) != '\0') {
LAB_0147ca34:
          if (in_stack_00000030._4_1_ != '\0') {
            thunk_FUN_00d56f10(in_stack_00000008,0);
          }
          return in_stack_00000018;
        }
        if (*(long *)(unaff_x25 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar4 = FUN_0147bd94();
        if (lVar4 == 0) {
          *(undefined1 *)(unaff_x25 + 0x19) = 1;
          goto LAB_0147ca34;
        }
        if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar2 = FUN_0147bee0(*(long *)(unaff_x25 + 0x28),lVar4,*(undefined8 *)(unaff_x25 + 0x40),0);
        *(int *)(unaff_x25 + 0x48) = iVar2 << 2;
        *(undefined4 *)(unaff_x25 + 0x4c) = 0;
        FUN_0147f0e8(lVar4);
        do {
          if (unaff_w22 < 1) goto LAB_0147ca34;
          iVar5 = *(int *)(unaff_x25 + 0x48);
          iVar2 = iVar5 - *(int *)(unaff_x25 + 0x4c);
          if (iVar2 != 0 && *(int *)(unaff_x25 + 0x4c) <= iVar5) {
            unaff_w29 = unaff_w22;
            if (iVar2 <= unaff_w22) {
              unaff_w29 = iVar2;
            }
            if (unaff_w21 == 0x20) {
              FUN_0179eccc(*(undefined8 *)(unaff_x25 + 0x40));
              goto LAB_0147c810;
            }
            iVar2 = unaff_w29 + 3;
            if (-1 < unaff_w29) {
              iVar2 = unaff_w29;
            }
            if (unaff_w29 < 4) goto LAB_0147c810;
            unaff_w20 = iVar2 >> 2;
            unaff_w19 = 0;
            goto LAB_0147c5b0;
          }
LAB_0147c84c:
        } while (iVar5 != 0);
      } while( true );
    }
LAB_0147c5b0:
    if (unaff_w21 != 0x10) {
      if (unaff_w21 == 8) {
        lVar4 = *(long *)(unaff_x25 + 0x40);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar5 = *(int *)(unaff_x25 + 0x4c);
        iVar2 = iVar5 + 3;
        if (-1 < iVar5) {
          iVar2 = iVar5;
        }
        uVar1 = unaff_w19 + (iVar2 >> 2);
        if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        fVar7 = *(float *)(lVar4 + (long)(int)uVar1 * 4 + 0x20);
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar7 = fVar7 * 127.5 + 127.5;
        dVar8 = (double)fVar7;
        dVar6 = modf(dVar8,(double *)&stack0x00000038);
        if (0.0 <= fVar7) {
          if (dVar6 == unaff_d12) {
            dVar6 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d13;
            goto LAB_0147c6dc;
          }
          dVar8 = (double)(long)(dVar8 + unaff_d12);
        }
        else if (dVar6 == unaff_d10) {
          dVar6 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d11;
LAB_0147c6dc:
          dVar8 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
          if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U) != 0) {
            dVar8 = dVar6;
          }
        }
        else {
          dVar8 = (double)(long)(dVar8 + unaff_d10);
        }
        uStack0000000000000038 = (undefined1)(int)dVar8;
        uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,&stack0x00000038)
        ;
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar3,uVar3);
        }
        FUN_01794eec();
      }
      goto LAB_0147c800;
    }
    lVar4 = *(long *)(unaff_x25 + 0x40);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar5 = *(int *)(unaff_x25 + 0x4c);
    iVar2 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
    uVar1 = unaff_w19 + (iVar2 >> 2);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    fVar7 = *(float *)(lVar4 + (long)(int)uVar1 * 4 + 0x20);
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar7 = fVar7 * unaff_s14 + unaff_s9;
    dVar8 = (double)fVar7;
    dVar6 = modf(dVar8,(double *)&stack0x00000038);
    if (0.0 <= fVar7) {
      if (dVar6 == unaff_d12) {
        dVar6 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d13;
        goto LAB_0147c6fc;
      }
      dVar8 = (double)(long)(dVar8 + unaff_d12);
    }
    else if (dVar6 == unaff_d10) {
      dVar6 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d11;
LAB_0147c6fc:
      dVar8 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
      if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U) != 0) {
        dVar8 = dVar6;
      }
    }
    else {
      dVar8 = (double)(long)(dVar8 + unaff_d10);
    }
    unaff_w23 = -0x80000000;
    if (dVar8 != INFINITY) {
      unaff_w23 = (int)dVar8;
    }
    if (unaff_w23 < 0) {
      unaff_w23 = unaff_w23 + 0x10000;
    }
    uStack0000000000000038 = (undefined1)unaff_w23;
    uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,&stack0x00000038);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(uVar3,uVar3);
    }
    FUN_01794eec();
    in_x9 = &UnityEngine_AndroidJavaObject___TypeInfo;
  } while( true );
}


