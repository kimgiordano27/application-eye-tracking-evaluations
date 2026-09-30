/*
FUNCTION_NAME: FUN_04929a10
ENTRY_POINT: 04929a10
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 115
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_12;validity_or_gating_hits_10;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_04929a10(long param_1,undefined4 param_2,undefined8 *param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 local_64;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar14 = *(long **)(param_1 + 0x30);
    local_64 = param_2;
    if (plVar14 == (long *)0x0) {
      uVar6 = FUN_05023540(&local_64,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x188));
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d9a2e0(lVar8);
      }
      lVar9 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>___ctor;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar14,lVar8,1);
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>___ctor:
      uVar6 = (*(code *)*puVar7)(plVar14,param_2,puVar7[1]);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar15 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar4 = 0;
    if (uVar15 != 0) {
      iVar4 = (int)uVar6 / (int)uVar15;
    }
    uVar3 = uVar6 - iVar4 * uVar15;
    if (uVar15 <= uVar3) {
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar15 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar11 = 0xffffffff;
      do {
        uVar5 = local_64;
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0)
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
        ;
        if (*(uint *)(lVar8 + 0x18) <= uVar15)
        goto System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor;
        puVar17 = (uint *)(lVar8 + (ulong)uVar15 * 0x24 + 0x20);
        uVar16 = (ulong)uVar15;
        if (*puVar17 == uVar6) {
          plVar14 = *(long **)(param_1 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_03642a0c(*(undefined8 *)
                                            (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
            if (plVar14 == (long *)0x0)
            goto 
            System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
            ;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar8 + uVar16 * 0x24 + 0x28),local_64,
                                *(undefined8 *)(*plVar14 + 0x1c0));
          }
          else {
            if (plVar14 == (long *)0x0)
            goto 
            System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
            ;
            lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar8 + uVar16 * 0x24 + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02d9a2e0(lVar9);
            }
            lVar10 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_04929c20;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_02d9a5d4(plVar14,lVar9,0);
LAB_04929c20:
            uVar12 = (*(code *)*puVar7)(plVar14,uVar1,uVar5,puVar7[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 == 0)
              goto 
              System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
              ;
              if (*(uint *)(lVar9 + 0x18) <= uVar3)
              goto System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor;
              *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar16 * 0x24 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 == 0)
              goto 
              System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
              ;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar11)
              goto System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor;
              *(undefined4 *)(lVar9 + uVar11 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar16 * 0x24 + 0x24);
            }
            lVar8 = lVar8 + uVar16 * 0x24;
            uVar19 = *(undefined8 *)(lVar8 + 0x34);
            uVar18 = *(undefined8 *)(lVar8 + 0x2c);
            param_3[2] = *(undefined8 *)(lVar8 + 0x3c);
            param_3[1] = uVar19;
            *param_3 = uVar18;
            *puVar17 = 0xffffffff;
            *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(param_1 + 0x24);
            *(uint *)(param_1 + 0x24) = uVar15;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar8 + uVar16 * 0x24 + 0x24);
        uVar11 = (ulong)uVar15;
        uVar15 = uVar2;
      } while (-1 < (int)uVar2);
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return 0;
}


