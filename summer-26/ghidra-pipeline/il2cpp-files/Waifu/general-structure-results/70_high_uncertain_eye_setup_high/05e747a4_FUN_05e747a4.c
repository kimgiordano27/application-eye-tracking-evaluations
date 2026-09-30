/*
FUNCTION_NAME: FUN_05e747a4
ENTRY_POINT: 05e747a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_05e747a4(long param_1,uint param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x30);
    lVar13 = *(long *)(param_1 + 0x18);
    if (plVar10 == (long *)0x0) {
      uVar11 = *(uint *)(lVar12 + 0x18);
      uVar2 = param_2 & 0x7fffffff;
      iVar14 = 0;
      if (uVar11 != 0) {
        iVar14 = (int)uVar2 / (int)uVar11;
      }
      uVar5 = uVar2 - iVar14 * uVar11;
      if (uVar11 <= uVar5) goto LAB_05e74a40;
      if (lVar13 == 0) goto LAB_05e74a4c;
      uVar7 = *(undefined8 *)(lVar13 + 0x18);
      uVar11 = *(int *)(lVar12 + (ulong)uVar5 * 4 + 0x20) - 1;
      if (uVar11 < (uint)uVar7) {
        iVar14 = -1;
        do {
          if (*(uint *)(lVar13 + (long)(int)uVar11 * 0x18 + 0x20) == uVar2) {
            plVar10 = (long *)FUN_05e733ac(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_05e74a40;
            if (plVar10 == (long *)0x0) goto LAB_05e74a4c;
            uVar8 = (**(code **)(*plVar10 + 0x1b8))
                              (plVar10,*(undefined4 *)(lVar13 + (long)(int)uVar11 * 0x18 + 0x28),
                               param_2,*(undefined8 *)(*plVar10 + 0x1c0));
            if ((uVar8 & 1) != 0) {
              return uVar11;
            }
            uVar7 = *(undefined8 *)(lVar13 + 0x18);
          }
          uVar5 = (uint)uVar7;
          if (uVar5 <= uVar11) goto LAB_05e74a40;
          iVar14 = iVar14 + 1;
          if ((int)uVar5 <= iVar14) goto LAB_05e74a44;
          uVar11 = *(uint *)(lVar13 + (long)(int)uVar11 * 0x18 + 0x24);
        } while (uVar11 < uVar5);
      }
    }
    else {
      lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0338f618(lVar4);
      }
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar10,lVar4,1);
System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext:
      uVar2 = (*(code *)*puVar3)(plVar10,param_2,puVar3[1]);
      uVar11 = *(uint *)(lVar12 + 0x18);
      uVar2 = uVar2 & 0x7fffffff;
      iVar14 = 0;
      if (uVar11 != 0) {
        iVar14 = (int)uVar2 / (int)uVar11;
      }
      uVar5 = uVar2 - iVar14 * uVar11;
      if (uVar11 <= uVar5) {
LAB_05e74a40:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      if (lVar13 == 0) goto LAB_05e74a4c;
      uVar7 = *(undefined8 *)(lVar13 + 0x18);
      uVar11 = *(int *)(lVar12 + (ulong)uVar5 * 4 + 0x20) - 1;
      if (uVar11 < (uint)uVar7) {
        iVar14 = 0;
        do {
          if (*(uint *)(lVar13 + (long)(int)uVar11 * 0x18 + 0x20) == uVar2) {
            lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar13 + (long)(int)uVar11 * 0x18 + 0x28);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_0338f618(lVar12);
            }
            lVar4 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar12) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_05e749d4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)FUN_0338f71c(plVar10,lVar12,0);
LAB_05e749d4:
            uVar8 = (*(code *)*puVar3)(plVar10,uVar1,param_2,puVar3[1]);
            if ((uVar8 & 1) != 0) {
              return uVar11;
            }
            uVar7 = *(undefined8 *)(lVar13 + 0x18);
          }
          uVar5 = (uint)uVar7;
          if (uVar5 <= uVar11) goto LAB_05e74a40;
          if ((int)uVar5 <= iVar14) goto LAB_05e74a44;
          uVar11 = *(uint *)(lVar13 + (long)(int)uVar11 * 0x18 + 0x24);
          iVar14 = iVar14 + 1;
        } while (uVar11 < uVar5);
      }
    }
  }
  return uVar11;
LAB_05e74a44:
  FUN_06851c18(0);
LAB_05e74a4c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


