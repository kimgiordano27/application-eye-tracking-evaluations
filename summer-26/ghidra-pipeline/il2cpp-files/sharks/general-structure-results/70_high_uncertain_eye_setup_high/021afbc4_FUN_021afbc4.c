/*
FUNCTION_NAME: FUN_021afbc4
ENTRY_POINT: 021afbc4
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_021afbc4(long param_1,undefined4 param_2,undefined8 param_3,char param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  local_64 = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_021afae4(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar14 = *(long **)(param_1 + 0x30);
  lVar16 = *(long *)(param_1 + 0x18);
  if (plVar14 == (long *)0x0) {
    uVar4 = FUN_02bccfd0(&local_64,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
    }
    lVar9 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_Reset
          ;
        }
        uVar12 = uVar12 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar14,lVar6,1);
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_Reset:
    uVar4 = (*(code *)*puVar5)(plVar14,param_2,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
  uVar15 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar18 = 0;
  if (uVar15 != 0) {
    iVar18 = (int)uVar4 / (int)uVar15;
  }
  uVar8 = uVar4 - iVar18 * uVar15;
  if (uVar8 < uVar15) {
    piVar17 = (int *)(lVar6 + (ulong)uVar8 * 4 + 0x20);
    uVar15 = *piVar17 - 1;
    if (plVar14 == (long *)0x0) {
      if (lVar16 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar15 < uVar8) {
        iVar18 = 0;
        do {
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar16 + (long)(int)uVar15 * 0x18 + 0x20) == uVar4) {
            plVar14 = (long *)FUN_01abe62c(*(undefined8 *)
                                            (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_021b0044;
            if (plVar14 == (long *)0x0)
            goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar16 + lVar6 * 0x18 + 0x28),local_64,
                                *(undefined8 *)(*plVar14 + 0x1c0));
            if ((uVar12 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar7 = &local_68;
                local_68 = local_64;
                goto LAB_021b0024;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_021b0044;
              puVar5 = (undefined8 *)(lVar16 + lVar6 * 0x18 + 0x30);
              *puVar5 = param_3;
              goto LAB_021b0000;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar15) goto LAB_021b0044;
          uVar15 = *(uint *)(lVar16 + lVar6 * 0x18 + 0x24);
          if ((int)uVar8 <= iVar18) {
            FUN_02befd44(0);
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
          iVar18 = iVar18 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar15 < uVar8);
      }
    }
    else {
      if (lVar16 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar15 < uVar8) {
        iVar18 = 0;
        do {
          uVar3 = local_64;
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar16 + (long)(int)uVar15 * 0x18 + 0x20) == uVar4) {
            lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar16 + lVar6 * 0x18 + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0185daa4(lVar9);
            }
            lVar11 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_021afd9c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_0185dba8(plVar14,lVar9,0);
LAB_021afd9c:
            uVar12 = (*(code *)*puVar5)(plVar14,uVar1,uVar3,puVar5[1]);
            if ((uVar12 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar7 = &local_6c;
                local_6c = local_64;
LAB_021b0024:
                uVar10 = thunk_FUN_018617ec(*(undefined8 *)
                                             (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70),
                                            puVar7);
                FUN_02befc40(uVar10,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar15 < *(uint *)(lVar16 + 0x18)) {
                puVar5 = (undefined8 *)(lVar16 + lVar6 * 0x18 + 0x30);
                *puVar5 = param_3;
LAB_021b0000:
                thunk_FUN_0188fd20(puVar5,param_3);
                return 1;
              }
              goto LAB_021b0044;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar15) goto LAB_021b0044;
          uVar15 = *(uint *)(lVar16 + lVar6 * 0x18 + 0x24);
          if ((int)uVar8 <= iVar18) {
            FUN_02befd44(0);
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
          iVar18 = iVar18 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar15 < uVar8);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar15 = *(uint *)(param_1 + 0x20);
      if (uVar15 == uVar8) {
        FUN_021b03e4(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1a0));
        lVar6 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
        if (lVar6 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
        uVar8 = *(uint *)(lVar6 + 0x18);
        iVar18 = 0;
        if (uVar8 != 0) {
          iVar18 = (int)uVar4 / (int)uVar8;
        }
        uVar2 = uVar4 - iVar18 * uVar8;
        if (uVar8 <= uVar2) goto LAB_021b0044;
        lVar16 = *(long *)(param_1 + 0x18);
        piVar17 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar16 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
      }
      if (lVar16 == 0) {
System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_021b0044;
      lVar6 = (long)(int)uVar15;
    }
    else {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      uVar15 = *(uint *)(param_1 + 0x24);
      if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_021b0044;
      lVar6 = (long)(int)uVar15;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar16 + lVar6 * 0x18 + 0x24);
    }
    lVar16 = lVar16 + lVar6 * 0x18;
    *(uint *)(lVar16 + 0x20) = uVar4;
    *(int *)(lVar16 + 0x24) = *piVar17 + -1;
    *(undefined8 *)(lVar16 + 0x30) = param_3;
    *(undefined4 *)(lVar16 + 0x28) = local_64;
    thunk_FUN_0188fd20((undefined8 *)(lVar16 + 0x30),param_3);
    *piVar17 = uVar15 + 1;
    return 1;
  }
LAB_021b0044:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


