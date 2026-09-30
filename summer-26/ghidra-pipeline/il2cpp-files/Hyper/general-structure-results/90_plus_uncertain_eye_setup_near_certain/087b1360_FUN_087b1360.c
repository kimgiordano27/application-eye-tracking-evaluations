/*
FUNCTION_NAME: FUN_087b1360
ENTRY_POINT: 087b1360
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


uint FUN_087b1360(long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined4 local_64;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x30);
    lVar14 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    local_64 = param_2;
    if (plVar11 == (long *)0x0) {
      uVar4 = FUN_08d98794(&local_64,*(undefined8 *)(lVar6 + 0x188));
      uVar12 = *(uint *)(lVar13 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar10 = 0;
      if (uVar12 != 0) {
        iVar10 = (int)uVar4 / (int)uVar12;
      }
      uVar3 = uVar4 - iVar10 * uVar12;
      if (uVar12 <= uVar3)
      goto 
      System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
      ;
      if (lVar14 == 0)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor
      ;
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar12 = *(int *)(lVar13 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar12 < uVar1) {
        iVar10 = 0;
        lVar13 = lVar14 + 0x20;
        do {
          if (*(uint *)(lVar13 + (long)(int)uVar12 * 0x24) == uVar4) {
            plVar11 = (long *)FUN_0566cc80(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar14 + 0x18) <= uVar12)
            goto 
            System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
            ;
            if (plVar11 == (long *)0x0)
            goto 
            System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor
            ;
            uVar8 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined4 *)(lVar13 + (long)(int)uVar12 * 0x24 + 8),
                               local_64,*(undefined8 *)(*plVar11 + 0x1c0));
            if ((uVar8 & 1) != 0) {
              return uVar12;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar12)
          goto 
          System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
          ;
          uVar12 = *(uint *)(lVar13 + (long)(int)uVar12 * 0x24 + 4);
          if ((int)uVar1 <= iVar10) {
            FUN_08d9d998(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar10 = iVar10 + 1;
        } while (uVar12 < uVar1);
      }
    }
    else {
      lVar6 = *(long *)(lVar6 + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34(lVar6);
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_087b14e8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar11,lVar6,1);
LAB_087b14e8:
      uVar4 = (*(code *)*puVar5)(plVar11,param_2,puVar5[1]);
      uVar12 = *(uint *)(lVar13 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar10 = 0;
      if (uVar12 != 0) {
        iVar10 = (int)uVar4 / (int)uVar12;
      }
      uVar3 = uVar4 - iVar10 * uVar12;
      if (uVar12 <= uVar3) {

        System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
        :
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (lVar14 == 0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar12 = *(int *)(lVar13 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar12 < uVar1) {
        iVar10 = 0;
        lVar13 = lVar14 + 0x20;
        do {
          if (*(uint *)(lVar13 + (long)(int)uVar12 * 0x24) == uVar4) {
            lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar2 = *(undefined4 *)(lVar13 + (long)(int)uVar12 * 0x24 + 8);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_04980b34(lVar6);
            }
            lVar7 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_087b15c4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_04980e68(plVar11,lVar6,0);
LAB_087b15c4:
            uVar8 = (*(code *)*puVar5)(plVar11,uVar2,param_2,puVar5[1]);
            if ((uVar8 & 1) != 0) {
              return uVar12;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar12)
          goto 
          System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
          ;
          uVar12 = *(uint *)(lVar13 + (long)(int)uVar12 * 0x24 + 4);
          if ((int)uVar1 <= iVar10) {
            FUN_08d9d998(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar10 = iVar10 + 1;
        } while (uVar12 < uVar1);
      }
    }
  }
  return uVar12;
}


