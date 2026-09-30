/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Category$$get_Label
ENTRY_POINT: 06d9a024
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

int Meta_XR_ImmersiveDebugger_Manager_Category__get_Label(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int in_w8;
  int in_w10;
  int iVar7;
  int unaff_w21;
  int unaff_w22;
  long unaff_x24;
  long unaff_x25;
  int unaff_w29;
  double dVar8;
  float fVar9;
  double dVar10;
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
  
code_r0x06d9a024:
  iStack0000000000000018 = unaff_w29 + iStack0000000000000018;
  unaff_w22 = unaff_w22 - unaff_w29;
  *(long *)(unaff_x25 + 0x38) = *(long *)(unaff_x25 + 0x38) + (long)unaff_w29;
  *(int *)(unaff_x25 + 0x4c) = in_w10 + unaff_w29;
  if (in_w10 + unaff_w29 != in_w8) goto LAB_06d9a05c;
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
    lVar6 = FUN_06d9958c();
    if (lVar6 == 0) {
      *(undefined1 *)(unaff_x25 + 0x19) = 1;
      goto LAB_06d9a240;
    }
    if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar4 = FUN_06d996fc(*(long *)(unaff_x25 + 0x28),lVar6,*(undefined8 *)(unaff_x25 + 0x40),0);
    *(int *)(unaff_x25 + 0x48) = iVar4 << 2;
    *(undefined4 *)(unaff_x25 + 0x4c) = 0;
    FUN_06d9c7a4(lVar6);
    do {
      if (unaff_w22 < 1) goto LAB_06d9a240;
      in_w8 = *(int *)(unaff_x25 + 0x48);
      iVar4 = in_w8 - *(int *)(unaff_x25 + 0x4c);
      if (iVar4 != 0 && *(int *)(unaff_x25 + 0x4c) <= in_w8) {
        unaff_w29 = unaff_w22;
        if (iVar4 <= unaff_w22) {
          unaff_w29 = iVar4;
        }
        if (unaff_w21 == 0x20) {
          FUN_0712ec00(*(undefined8 *)(unaff_x25 + 0x40));
          goto LAB_06d9a020;
        }
        iVar4 = unaff_w29 + 3;
        if (-1 < unaff_w29) {
          iVar4 = unaff_w29;
        }
        if (unaff_w29 < 4) goto LAB_06d9a020;
        iVar7 = 0;
        goto LAB_06d99dc0;
      }
LAB_06d9a05c:
    } while (in_w8 != 0);
  } while( true );
LAB_06d99dc0:
  do {
    if (unaff_w21 == 0x10) {
      lVar6 = *(long *)(unaff_x25 + 0x40);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      iVar3 = *(int *)(unaff_x25 + 0x4c);
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      uVar1 = iVar7 + (iVar2 >> 2);
      if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      fVar9 = *(float *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      fVar9 = fVar9 * unaff_s14 + unaff_s9;
      dVar10 = (double)fVar9;
      dVar8 = modf(dVar10,(double *)&stack0x00000038);
      if (0.0 <= fVar9) {
        if (dVar8 == unaff_d12) {
          dVar8 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d13;
          goto LAB_06d99f0c;
        }
        dVar10 = (double)(long)(dVar10 + unaff_d12);
      }
      else if (dVar8 == unaff_d10) {
        dVar8 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d11;
LAB_06d99f0c:
        dVar10 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
        if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U) != 0) {
          dVar10 = dVar8;
        }
      }
      else {
        dVar10 = (double)(long)(dVar10 + unaff_d10);
      }
      iVar2 = -0x80000000;
      if (dVar10 != INFINITY) {
        iVar2 = (int)dVar10;
      }
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x10000;
      }
      uStack0000000000000038 = (undefined1)iVar2;
      uVar5 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar5,uVar5);
      }
      FUN_0712430c();
      iVar3 = iVar2 + 0xff;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      uStack000000000000001c = (undefined1)((uint)iVar3 >> 8);
      thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,(long)&stack0x00000018 + 4);
      FUN_0712430c();
    }
    else if (unaff_w21 == 8) {
      lVar6 = *(long *)(unaff_x25 + 0x40);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      iVar3 = *(int *)(unaff_x25 + 0x4c);
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      uVar1 = iVar7 + (iVar2 >> 2);
      if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      fVar9 = *(float *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      fVar9 = fVar9 * 127.5 + 127.5;
      dVar10 = (double)fVar9;
      dVar8 = modf(dVar10,(double *)&stack0x00000038);
      if (0.0 <= fVar9) {
        if (dVar8 == unaff_d12) {
          dVar8 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d13;
          goto LAB_06d99eec;
        }
        dVar10 = (double)(long)(dVar10 + unaff_d12);
      }
      else if (dVar8 == unaff_d10) {
        dVar8 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + unaff_d11;
LAB_06d99eec:
        dVar10 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
        if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U) != 0) {
          dVar10 = dVar8;
        }
      }
      else {
        dVar10 = (double)(long)(dVar10 + unaff_d10);
      }
      uStack0000000000000038 = (undefined1)(int)dVar10;
      uVar5 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar5,uVar5);
      }
      FUN_0712430c();
    }
    iVar7 = iVar7 + 1;
  } while (iVar4 >> 2 != iVar7);
LAB_06d9a020:
  in_w8 = *(int *)(unaff_x25 + 0x48);
  in_w10 = *(int *)(unaff_x25 + 0x4c);
  goto code_r0x06d9a024;
}


