/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionHook$$.ctor
ENTRY_POINT: 06d99f04
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d9a2f4) */
/* WARNING: Removing unreachable block (ram,0x06d9a2e4) */

int Meta_XR_ImmersiveDebugger_Manager_ActionHook___ctor(double param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  int unaff_w22;
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
  int iStack0000000000000018;
  undefined1 uStack000000000000001c;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 uStack0000000000000038;
  undefined7 uStack0000000000000039;
  
code_r0x06d99f04:
  dVar6 = param_1 + unaff_d13;
  do {
    if (((long)param_1 & 1U) != 0) {
      param_1 = dVar6;
    }
LAB_06d99f80:
    iVar2 = -0x80000000;
    if (param_1 != INFINITY) {
      iVar2 = (int)param_1;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x10000;
    }
    uStack0000000000000038 = (undefined1)iVar2;
    uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar3,uVar3);
    }
    FUN_0712430c();
    iVar5 = iVar2 + 0xff;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    uStack000000000000001c = (undefined1)((uint)iVar5 >> 8);
    thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,(long)&stack0x00000018 + 4);
    FUN_0712430c();
LAB_06d9a010:
    unaff_w19 = unaff_w19 + 1;
    if (unaff_w20 == unaff_w19) {
LAB_06d9a020:
      iVar5 = *(int *)(unaff_x25 + 0x48);
      iVar2 = *(int *)(unaff_x25 + 0x4c) + unaff_w29;
      iStack0000000000000018 = unaff_w29 + iStack0000000000000018;
      unaff_w22 = unaff_w22 - unaff_w29;
      *(long *)(unaff_x25 + 0x38) = *(long *)(unaff_x25 + 0x38) + (long)unaff_w29;
      *(int *)(unaff_x25 + 0x4c) = iVar2;
      if (iVar2 != iVar5) goto LAB_06d9a05c;
      *(undefined4 *)(unaff_x25 + 0x48) = 0;
      do {
        if (*(char *)(unaff_x25 + 0x19) != '\0') {
LAB_06d9a240:
          if (in_stack_00000030._4_1_ != '\0') {
            thunk_FUN_03cdf404(in_stack_00000008,0);
          }
          return iStack0000000000000018;
        }
        if (*(long *)(unaff_x25 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar4 = FUN_06d9958c();
        if (lVar4 == 0) {
          *(undefined1 *)(unaff_x25 + 0x19) = 1;
          goto LAB_06d9a240;
        }
        if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        iVar2 = FUN_06d996fc(*(long *)(unaff_x25 + 0x28),lVar4,*(undefined8 *)(unaff_x25 + 0x40),0);
        *(int *)(unaff_x25 + 0x48) = iVar2 << 2;
        *(undefined4 *)(unaff_x25 + 0x4c) = 0;
        FUN_06d9c7a4(lVar4);
        do {
          if (unaff_w22 < 1) goto LAB_06d9a240;
          iVar5 = *(int *)(unaff_x25 + 0x48);
          iVar2 = iVar5 - *(int *)(unaff_x25 + 0x4c);
          if (iVar2 != 0 && *(int *)(unaff_x25 + 0x4c) <= iVar5) {
            unaff_w29 = unaff_w22;
            if (iVar2 <= unaff_w22) {
              unaff_w29 = iVar2;
            }
            if (unaff_w21 == 0x20) {
              FUN_0712ec00(*(undefined8 *)(unaff_x25 + 0x40));
              goto LAB_06d9a020;
            }
            iVar2 = unaff_w29 + 3;
            if (-1 < unaff_w29) {
              iVar2 = unaff_w29;
            }
            if (unaff_w29 < 4) goto LAB_06d9a020;
            unaff_w20 = iVar2 >> 2;
            unaff_w19 = 0;
            goto LAB_06d99dc0;
          }
LAB_06d9a05c:
        } while (iVar5 != 0);
      } while( true );
    }
LAB_06d99dc0:
    if (unaff_w21 != 0x10) {
      if (unaff_w21 == 8) {
        lVar4 = *(long *)(unaff_x25 + 0x40);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        iVar5 = *(int *)(unaff_x25 + 0x4c);
        iVar2 = iVar5 + 3;
        if (-1 < iVar5) {
          iVar2 = iVar5;
        }
        uVar1 = unaff_w19 + (iVar2 >> 2);
        if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        fVar7 = *(float *)(lVar4 + (long)(int)uVar1 * 4 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        fVar7 = fVar7 * 127.5 + 127.5;
        dVar8 = (double)fVar7;
        dVar6 = modf(dVar8,(double *)&stack0x00000038);
        if (0.0 <= fVar7) {
          if (dVar6 == unaff_d12) {
            dVar6 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d13;
            goto LAB_06d99eec;
          }
          dVar8 = (double)(long)(dVar8 + unaff_d12);
        }
        else if (dVar6 == unaff_d10) {
          dVar6 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d11;
LAB_06d99eec:
          dVar8 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
          if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U) != 0) {
            dVar8 = dVar6;
          }
        }
        else {
          dVar8 = (double)(long)(dVar8 + unaff_d10);
        }
        uStack0000000000000038 = (undefined1)(int)dVar8;
        uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30(uVar3,uVar3);
        }
        FUN_0712430c();
      }
      goto LAB_06d9a010;
    }
    lVar4 = *(long *)(unaff_x25 + 0x40);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar5 = *(int *)(unaff_x25 + 0x4c);
    iVar2 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
    uVar1 = unaff_w19 + (iVar2 >> 2);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    fVar7 = *(float *)(lVar4 + (long)(int)uVar1 * 4 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar7 = fVar7 * unaff_s14 + unaff_s9;
    dVar8 = (double)fVar7;
    dVar6 = modf(dVar8,(double *)&stack0x00000038);
    if (0.0 <= fVar7) {
      if (dVar6 == unaff_d12) {
        param_1 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
        goto code_r0x06d99f04;
      }
      param_1 = (double)(long)(dVar8 + unaff_d12);
      goto LAB_06d99f80;
    }
    if (dVar6 != unaff_d10) {
      param_1 = (double)(long)(dVar8 + unaff_d10);
      goto LAB_06d99f80;
    }
    param_1 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
    dVar6 = param_1 + unaff_d11;
  } while( true );
}


