/*
FUNCTION_NAME: FUN_06ad4f98
ENTRY_POINT: 06ad4f98
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;telemetry_or_network_hits_9;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_06ad4f98(long param_1,undefined8 param_2,byte param_3,char param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  undefined8 local_70;
  undefined8 local_68;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  local_68 = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_06ad4eb8(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar12 = *(long **)(param_1 + 0x30);
  lVar14 = *(long *)(param_1 + 0x18);
  if (plVar12 == (long *)0x0) {
    uVar3 = FUN_0711f264(&local_68,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 400));
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_06ad5088;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar12,lVar5,1);
LAB_06ad5088:
    uVar3 = (*(code *)*puVar4)(plVar12,param_2,puVar4[1]);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) goto LAB_06ad5404;
  uVar13 = *(uint *)(lVar5 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar16 = 0;
  if (uVar13 != 0) {
    iVar16 = (int)uVar3 / (int)uVar13;
  }
  uVar6 = uVar3 - iVar16 * uVar13;
  if (uVar13 <= uVar6) {
System_Array_EmptyInternalEnumerator<NativeUtilityPlugin_SerializedJointPose>___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  piVar15 = (int *)(lVar5 + (ulong)uVar6 * 4 + 0x20);
  param_3 = param_3 & 1;
  uVar13 = *piVar15 - 1;
  if (plVar12 == (long *)0x0) {
    if (lVar14 == 0) goto LAB_06ad5404;
    uVar8 = *(undefined8 *)(lVar14 + 0x18);
    uVar6 = (uint)uVar8;
    if (uVar13 < uVar6) {
      iVar16 = 0;
      do {
        uVar6 = (uint)uVar8;
        lVar5 = (long)(int)uVar13;
        if (*(uint *)(lVar14 + (long)(int)uVar13 * 0x18 + 0x20) == uVar3) {
          plVar12 = (long *)FUN_041d81b8(*(undefined8 *)
                                          (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar14 + 0x18) <= uVar13)
          goto System_Array_EmptyInternalEnumerator<NativeUtilityPlugin_SerializedJointPose>___ctor;
          if (plVar12 == (long *)0x0) goto LAB_06ad5404;
          uVar10 = (**(code **)(*plVar12 + 0x1b8))
                             (plVar12,*(undefined8 *)(lVar14 + lVar5 * 0x18 + 0x28),local_68,
                              *(undefined8 *)(*plVar12 + 0x1c0));
          if ((uVar10 & 1) != 0) {
            if (param_4 == '\x02') goto LAB_06ad53d4;
            if (param_4 != '\x01') {
              return 0;
            }
            if (uVar13 < *(uint *)(lVar14 + 0x18)) {
              *(byte *)(lVar14 + lVar5 * 0x18 + 0x30) = param_3;
              return 1;
            }
            goto 
            System_Array_EmptyInternalEnumerator<NativeUtilityPlugin_SerializedJointPose>___ctor;
          }
          uVar6 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar6 <= uVar13)
        goto System_Array_EmptyInternalEnumerator<NativeUtilityPlugin_SerializedJointPose>___ctor;
        uVar13 = *(uint *)(lVar14 + lVar5 * 0x18 + 0x24);
        if ((int)uVar6 <= iVar16) {
          FUN_07122f08(0);
        }
        uVar8 = *(undefined8 *)(lVar14 + 0x18);
        iVar16 = iVar16 + 1;
        uVar6 = (uint)uVar8;
      } while (uVar13 < uVar6);
    }
  }
  else {
    if (lVar14 == 0) goto LAB_06ad5404;
    uVar8 = *(undefined8 *)(lVar14 + 0x18);
    uVar6 = (uint)uVar8;
    if (uVar13 < uVar6) {
      iVar16 = 0;
      do {
        uVar2 = local_68;
        uVar6 = (uint)uVar8;
        lVar5 = (long)(int)uVar13;
        if (*(uint *)(lVar14 + (long)(int)uVar13 * 0x18 + 0x20) == uVar3) {
          lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
          uVar8 = *(undefined8 *)(lVar14 + lVar5 * 0x18 + 0x28);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03cf1244(lVar7);
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_06ad5178;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348(plVar12,lVar7,0);
LAB_06ad5178:
          uVar10 = (*(code *)*puVar4)(plVar12,uVar8,uVar2,puVar4[1]);
          if ((uVar10 & 1) != 0) {
            if (param_4 == '\x02') {
LAB_06ad53d4:
              local_70 = local_68;
              uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)
                                          (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70),
                                         &local_70);
              FUN_07122e04(uVar8,0);
              return 0;
            }
            if (param_4 != '\x01') {
              return 0;
            }
            if (uVar13 < *(uint *)(lVar14 + 0x18)) {
              *(byte *)(lVar14 + lVar5 * 0x18 + 0x30) = param_3;
              return 1;
            }
            goto 
            System_Array_EmptyInternalEnumerator<NativeUtilityPlugin_SerializedJointPose>___ctor;
          }
          uVar6 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar6 <= uVar13)
        goto System_Array_EmptyInternalEnumerator<NativeUtilityPlugin_SerializedJointPose>___ctor;
        uVar13 = *(uint *)(lVar14 + lVar5 * 0x18 + 0x24);
        if ((int)uVar6 <= iVar16) {
          FUN_07122f08(0);
        }
        uVar8 = *(undefined8 *)(lVar14 + 0x18);
        iVar16 = iVar16 + 1;
        uVar6 = (uint)uVar8;
      } while (uVar13 < uVar6);
    }
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar13 = *(uint *)(param_1 + 0x20);
    if (uVar13 == uVar6) {
      FUN_06ad57a0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b8));
      lVar5 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x20) = uVar13 + 1;
      if (lVar5 == 0) goto LAB_06ad5404;
      uVar6 = *(uint *)(lVar5 + 0x18);
      iVar16 = 0;
      if (uVar6 != 0) {
        iVar16 = (int)uVar3 / (int)uVar6;
      }
      uVar1 = uVar3 - iVar16 * uVar6;
      if (uVar6 <= uVar1)
      goto System_Array_EmptyInternalEnumerator<NativeUtilityPlugin_SerializedJointPose>___ctor;
      lVar14 = *(long *)(param_1 + 0x18);
      piVar15 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar14 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x20) = uVar13 + 1;
    }
    if (lVar14 == 0) {
LAB_06ad5404:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar13)
    goto System_Array_EmptyInternalEnumerator<NativeUtilityPlugin_SerializedJointPose>___ctor;
    lVar5 = (long)(int)uVar13;
  }
  else {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar13 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(lVar14 + 0x18) <= uVar13)
    goto System_Array_EmptyInternalEnumerator<NativeUtilityPlugin_SerializedJointPose>___ctor;
    lVar5 = (long)(int)uVar13;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar14 + lVar5 * 0x18 + 0x24);
  }
  lVar14 = lVar14 + lVar5 * 0x18;
  *(uint *)(lVar14 + 0x20) = uVar3;
  *(int *)(lVar14 + 0x24) = *piVar15 + -1;
  *(byte *)(lVar14 + 0x30) = param_3;
  *(undefined8 *)(lVar14 + 0x28) = local_68;
  *piVar15 = uVar13 + 1;
  return 1;
}


