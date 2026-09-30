/*
FUNCTION_NAME: FUN_04e7b270
ENTRY_POINT: 04e7b270
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04e7b670) */
/* WARNING: Removing unreachable block (ram,0x04e7b724) */

void FUN_04e7b270(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  undefined1 *__s;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_70 [4];
  int local_6c;
  long local_68;
  
  puVar17 = auStack_70;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_094126b7 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e83fb0);
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08e6baa0);
    DAT_094126b7 = 1;
  }
  puVar4 = PTR_DAT_08e83fb0;
  local_6c = 0;
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar6 = FUN_077e9c24((ulong)uVar1,0);
  puVar3 = PTR_DAT_08e6baa0;
  uVar16 = (ulong)uVar6;
  if ((int)uVar6 < 0x33) {
    uVar16 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
    if (uVar6 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      puVar17 = auStack_70 + -(uVar16 + 0xf & 0xfffffffffffffff0);
      __s = puVar17;
    }
    memset(__s,0,uVar16);
    lVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
    FUN_077e9ab0(lVar8,__s,uVar6,0);
    if (uVar6 == 0) {
      puVar17 = (undefined1 *)0x0;
    }
    else {
      puVar17 = puVar17 + -(uVar16 + 0xf & 0xfffffffffffffff0);
    }
    memset(puVar17,0,uVar16);
    lVar9 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
    FUN_077e9ab0(lVar9,puVar17,uVar6,0);
  }
  else {
    uVar7 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,uVar16);
    lVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
    FUN_077e9ae8(lVar8,uVar7,uVar16,0);
    uVar7 = FUN_03c8f97c(*(undefined8 *)puVar3,uVar16);
    lVar9 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
    FUN_077e9ae8(lVar9,uVar7,uVar16,0);
  }
  if (param_2 != (long *)0x0) {
    lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03cf1244(lVar13);
    }
    lVar14 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04e7b488;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_03cf1348(param_2,lVar13,0);
LAB_04e7b488:
    puVar3 = PTR_DAT_08e6a288;
    plVar11 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
    puVar4 = PTR_DAT_08e6a290;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar13 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_04e7b4f8;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar4,0);
LAB_04e7b4f8:
      uVar16 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_04e7b664;
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar16 == 0) goto LAB_04e7b63c;
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current;
      }
      lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03cf1244(lVar13);
      }
      lVar14 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_04e7b570;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_03cf1348(plVar11,lVar13,0);
LAB_04e7b570:
      auVar18 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      local_6c = 0;
      uVar16 = FUN_04e7b7f8(param_1,auVar18._0_8_,auVar18._8_8_,&local_6c,
                            *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1e0));
      iVar5 = local_6c;
      if ((uVar16 & 1) == 0) {
        if (local_6c < (int)uVar1) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar16 = FUN_077e9ba0(lVar9,local_6c,0);
          if ((uVar16 & 1) == 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_077e9b24(lVar8,iVar5,0);
          }
        }
      }
      else {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_077e9b24(lVar9,local_6c,0);
      }
    } while( true );
  }
LAB_04e7b710:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar15 = piVar15 + 4;
    if (uVar16 == 0) break;
System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_04e7b658;
    }
  }
LAB_04e7b63c:
  puVar10 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,0);
LAB_04e7b658:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_04e7b664:
  if (0 < (int)uVar1) {
    if (lVar8 == 0) goto LAB_04e7b710;
    uVar16 = 0;
    lVar9 = 0x28;
    do {
      uVar12 = FUN_077e9ba0(lVar8,uVar16 & 0xffffffff,0);
      if ((uVar12 & 1) != 0) {
        lVar13 = *(long *)(param_1 + 0x18);
        if (lVar13 == 0) goto LAB_04e7b710;
        if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_04e77a20(param_1,*(undefined8 *)(lVar13 + lVar9),((undefined8 *)(lVar13 + lVar9))[1],
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148));
      }
      uVar16 = uVar16 + 1;
      lVar9 = lVar9 + 0x18;
    } while (uVar1 != uVar16);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


