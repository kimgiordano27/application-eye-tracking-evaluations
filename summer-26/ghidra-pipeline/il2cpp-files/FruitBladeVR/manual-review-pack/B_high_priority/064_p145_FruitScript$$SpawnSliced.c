/*
FUNCTION_NAME: FruitScript$$SpawnSliced
ENTRY_POINT: 01d425a4
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01d429b8) */
/* WARNING: Removing unreachable block (ram,0x01d42c04) */

void FruitScript__SpawnSliced
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  puVar3 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  if ((DAT_03ef13a4 & 1) == 0) {
    FUN_01c5c92c(PTR_Method_UnityEngine_GameObject_AddComponent<AutoDisable>___03cb5b80);
    FUN_01c5c92c(PTR_Method_UnityEngine_GameObject_GetComponent<AutoDisable>___03cb5b88);
    FUN_01c5c92c(PTR_Method_UnityEngine_GameObject_GetComponentsInChildren<Rigidbody>___03cb5b90);
    FUN_01c5c92c(PTR_System_IDisposable_TypeInfo_03cb5b98);
    FUN_01c5c92c(PTR_System_Collections_IEnumerator_TypeInfo_03cb5ba0);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(PTR_UnityEngine_Transform_TypeInfo_03cb5ba8);
    DAT_03ef13a4 = 1;
  }
  uVar18 = *(undefined8 *)(param_8 + 0x28);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar18,0,0);
  if (((uVar9 & 1) != 0) ||
     (uVar9 = System_String__IsNullOrEmpty(*(undefined8 *)(param_8 + 0x20),0), (uVar9 & 1) != 0)) {
    return;
  }
  if (*(long *)(param_8 + 0x28) != 0) {
    lVar10 = ObjectPoolManager__SpawnFromPool
                       (param_1,param_2,param_3,*(long *)(param_8 + 0x28),
                        *(undefined8 *)(param_8 + 0x20));
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(*(long *)puVar3);
    }
    uVar9 = UnityEngine_Object__op_Equality(lVar10,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    if (lVar10 != 0) {
      UnityEngine_GameObject__SetActive(lVar10,0,0);
      lVar11 = UnityEngine_GameObject__get_transform(lVar10,0);
      if (lVar11 != 0) {
        UnityEngine_Transform__set_position(param_1,param_2,param_3,lVar11,0);
        lVar11 = UnityEngine_GameObject__get_transform(lVar10,0);
        if (lVar11 != 0) {
          UnityEngine_Transform__set_rotation(param_4,param_5,param_6,param_7,lVar11,0);
          lVar11 = UnityEngine_GameObject__get_transform(lVar10,0);
          if (lVar11 != 0) {
            UnityEngine_Transform__set_localScale
                      (*(undefined4 *)(param_8 + 0x4c),*(undefined4 *)(param_8 + 0x50),
                       *(undefined4 *)(param_8 + 0x54),lVar11,0);
            lVar11 = UnityEngine_GameObject__get_transform(lVar10,0);
            if (lVar11 != 0) {
              plVar12 = (long *)UnityEngine_Transform__GetEnumerator(lVar11,0);
              puVar8 = PTR_UnityEngine_Transform_TypeInfo_03cb5ba8;
              puVar7 = PTR_System_Collections_IEnumerator_TypeInfo_03cb5ba0;
              puVar5 = PTR_UnityEngine_Quaternion_TypeInfo_03cb5ab8;
              puVar4 = PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0;
              do {
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5cbd4();
                }
                lVar15 = *plVar12;
                lVar11 = *(long *)puVar7;
                uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar9 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar11) {
                      puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_01d42814;
                    }
                    uVar9 = uVar9 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar9 != 0);
                }
                puVar13 = (undefined8 *)FUN_01c8cb54(plVar12,lVar11,0);
LAB_01d42814:
                uVar9 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                puVar6 = PTR_System_IDisposable_TypeInfo_03cb5b98;
                if ((uVar9 & 1) == 0) {
                  plVar12 = (long *)thunk_FUN_01c8fb4c(plVar12,*(undefined8 *)
                                                                                                                                
                                                  PTR_System_IDisposable_TypeInfo_03cb5b98);
                  if (plVar12 == (long *)0x0) goto LAB_01d429ac;
                  lVar11 = *plVar12;
                  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar9 == 0) goto LAB_01d42984;
                  piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  goto LAB_01d4296c;
                }
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5cbd4();
                }
                lVar15 = *plVar12;
                lVar11 = *(long *)puVar7;
                uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar9 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar11) {
                      puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto LAB_01d4287c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar9 != 0);
                }
                puVar13 = (undefined8 *)FUN_01c8cb54(plVar12,lVar11,1);
LAB_01d4287c:
                plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
                if (plVar14 != (long *)0x0) {
                  bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
                  if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cf54(plVar14);
                  }
                }
                if (DAT_03ef1415 == '\0') {
                  FUN_01c5c92c(puVar4);
                  DAT_03ef1415 = '\x01';
                }
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5cbd4();
                }
                puVar16 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
                UnityEngine_Transform__set_localPosition(*puVar16,puVar16[1],puVar16[2],plVar14,0);
                if (DAT_03ef1416 == '\0') {
                  FUN_01c5c92c(puVar5);
                  DAT_03ef1416 = '\x01';
                }
                puVar16 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
                UnityEngine_Transform__set_localRotation
                          (*puVar16,puVar16[1],puVar16[2],puVar16[3],plVar14,0);
              } while( true );
            }
          }
        }
      }
    }
  }
  goto LAB_01d42bfc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
LAB_01d4296c:
    if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01d429a0;
    }
  }
LAB_01d42984:
  puVar13 = (undefined8 *)FUN_01c8cb54(plVar12,*(long *)puVar6,0);
LAB_01d429a0:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01d429ac:
  lVar11 = UnityEngine_GameObject__get_transform(lVar10,0);
  if (DAT_03ef1417 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
    DAT_03ef1417 = '\x01';
  }
  if (lVar11 != 0) {
    lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
               *(undefined4 *)(lVar15 + 0x14),lVar11,0);
    lVar11 = UnityEngine_GameObject__GetComponentsInChildren<object>
                       (lVar10,*(undefined8 *)
                                PTR_Method_UnityEngine_GameObject_GetComponentsInChildren<Rigidbody>___03cb5b90
                       );
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar1) {
        uVar19 = 0;
        do {
          if (uVar1 <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbdc();
          }
          lVar15 = *(long *)(lVar11 + (long)(int)uVar19 * 8 + 0x20);
          if (DAT_03ef1415 == '\0') {
            FUN_01c5c92c(puVar4);
            DAT_03ef1415 = '\x01';
          }
          if (lVar15 == 0) goto LAB_01d42bfc;
          puVar16 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
          UnityEngine_Rigidbody__set_linearVelocity(*puVar16,puVar16[1],puVar16[2],lVar15,0);
          if (DAT_03ef1415 == '\0') {
            FUN_01c5c92c(puVar4);
            DAT_03ef1415 = '\x01';
          }
          puVar16 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
          UnityEngine_Rigidbody__set_angularVelocity(*puVar16,puVar16[1],puVar16[2],lVar15,0);
          UnityEngine_Rigidbody__set_isKinematic(lVar15,0,0);
          uVar20 = UnityEngine_Random__Range(0xbf800000,0x3f800000,0);
          uVar21 = UnityEngine_Random__Range(0x3f800000,0x40000000,0);
          uVar22 = UnityEngine_Random__Range(0xbf000000,0x3f000000,0);
          UnityEngine_Rigidbody__AddForce(uVar20,uVar21,uVar22,lVar15,1,0);
          uVar1 = *(uint *)(lVar11 + 0x18);
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)uVar1);
      }
      lVar11 = UnityEngine_GameObject__GetComponent<object>
                         (lVar10,*(undefined8 *)
                                  PTR_Method_UnityEngine_GameObject_GetComponent<AutoDisable>___03cb5b88
                         );
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(*(long *)puVar3);
      }
      uVar9 = UnityEngine_Object__op_Equality(lVar11,0,0);
      if ((uVar9 & 1) != 0) {
        lVar11 = UnityEngine_GameObject__AddComponent<object>
                           (lVar10,*(undefined8 *)
                                    PTR_Method_UnityEngine_GameObject_AddComponent<AutoDisable>___03cb5b80
                           );
      }
      if (lVar11 != 0) {
        uVar18 = *(undefined8 *)(param_8 + 0x28);
        *(undefined4 *)(lVar11 + 0x20) = 0x40000000;
        *(undefined8 *)(lVar11 + 0x28) = uVar18;
        thunk_FUN_01cc8040();
        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(param_8 + 0x20);
        thunk_FUN_01cc8040((undefined8 *)(lVar11 + 0x30));
        UnityEngine_GameObject__SetActive(lVar10,1,0);
        return;
      }
    }
  }
LAB_01d42bfc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


