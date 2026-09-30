/*
FUNCTION_NAME: FUN_03a6ad38
ENTRY_POINT: 03a6ad38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 232
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03a6b31c) */
/* WARNING: Removing unreachable block (ram,0x03a6b1b8) */
/* WARNING: Removing unreachable block (ram,0x03a6b4d0) */
/* WARNING: Removing unreachable block (ram,0x03a6b1e4) */
/* WARNING: Removing unreachable block (ram,0x03a6b4d8) */

void FUN_03a6ad38(long param_1,long param_2,uint param_3,undefined4 param_4,undefined8 param_5,
                 long param_6,uint param_7)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  char local_64 [4];
  
                    /* try { // try from 03a6ad64 to 03b6adb7 has its CatchHandler @ 03a6ad64
                       catch() { ... } // from try @ 03a6ad64 with catch @ 03a6ad64
                       catch() { ... } // from try @ 03a6adf4 with catch @ 03a6ad64
                       catch() { ... } // from try @ 03a6af3c with catch @ 03a6ad64
                       catch() { ... } // from try @ 03a6af88 with catch @ 03a6ad64
                       catch() { ... } // from try @ 03a6b020 with catch @ 03a6ad64
                       catch() { ... } // from try @ 03a6b0b0 with catch @ 03a6ad64
                       catch() { ... } // from try @ 03a6b10c with catch @ 03a6ad64
                       catch() { ... } // from try @ 03a6b15c with catch @ 03a6ad64 */
  if ((DAT_04838d82 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7779);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>_ParseChoiceList__);
                    /* try { // try from 03a6adb8 to 03b6adc7 has its CatchHandler @ 03a6b10c */
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    thunk_FUN_01efb3a4(StringLiteral_7780);
                    /* try { // try from 03a6add4 to 03b6addb has its CatchHandler @ 03a6aea0 */
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
                    /* try { // try from 03a6ade8 to 03b6adf3 has its CatchHandler @ 03a6aea4 */
    DAT_04838d82 = 1;
  }
  puVar6 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  local_64[0] = '\0';
  if (param_6 == 0) {
LAB_03a6b4cc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 03a6adf4 to 03b6aec3 has its CatchHandler @ 03a6ad64 */
  if (0 < *(int *)(param_6 + 0x18)) {
    iVar19 = 0;
    do {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_03a6b4cc;
      uVar9 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
      local_64[0] = '\0';
      FUN_035ce230(uVar9,local_64,0);
      plVar8 = *(long **)(param_1 + 0x10);
      uVar10 = FUN_030f28e4(param_6,iVar19,
                            *(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar10,uVar10);
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                 (plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x310));
      if (plVar8 != (long *)0x0) {
                    /* catch() { ... } // from try @ 03a6add4 with catch @ 03a6aea0 */
        bVar1 = *(byte *)(*(long *)StringLiteral_7780 + 0x130);
                    /* catch() { ... } // from try @ 03a6ade8 with catch @ 03a6aea4 */
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_7780)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
      }
      if (local_64[0] != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar9,0);
      }
      if (plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[2];
        if (plVar11 == (long *)0x0) goto LAB_03a6b4cc;
        uVar9 = (**(code **)(*plVar11 + 0x308))(plVar11,*(undefined8 *)(*plVar11 + 0x310));
        local_64[0] = '\0';
        FUN_035ce230(uVar9,local_64,0);
        plVar11 = (long *)plVar8[2];
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380))
        ;
        bVar4 = false;
        bVar3 = false;
UnityEngine_InputSystem_Pointer__set_press:
        do {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar16 = *plVar11;
          lVar15 = *(long *)puVar5;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03a6af8c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,0);
LAB_03a6af8c:
          uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if ((uVar17 & 1) == 0) break;
          lVar16 = *plVar11;
          lVar15 = *(long *)puVar5;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_03a6afec;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,1);
LAB_03a6afec:
          plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
          plVar14 = (long *)thunk_FUN_01f11920();
          plVar13 = (long *)*plVar14;
          plVar14 = (long *)plVar14[1];
          if ((plVar13 != (long *)0x0) &&
             (*plVar13 !=
              *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar13);
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar15 = FUN_039fd90c(param_2,0);
          uVar10 = FUN_03a64408(plVar13);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar10,uVar10);
          }
          uVar17 = FUN_0340e66c(lVar15,uVar10,0);
          if ((uVar17 & 1) != 0) {
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar14);
            }
            FUN_03a66fe0(plVar14,1);
            FUN_03a6b57c(param_1,param_5,plVar14,param_4,param_3 & 1,param_7 & 1);
            uVar17 = thunk_FUN_0340e318(plVar13,*(undefined8 *)
                                                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                        ,0);
            bVar3 = true;
            if ((uVar17 & 1) != 0) {
              bVar4 = true;
            }
            goto UnityEngine_InputSystem_Pointer__set_press;
          }
          bVar2 = !bVar3;
          bVar3 = false;
        } while (bVar2);
        plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03a6b190;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)
                    FUN_01ecb238(plVar11,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                 ,0);
LAB_03a6b190:
          (*(code *)*puVar12)(plVar11,puVar12[1]);
        }
        if (local_64[0] != '\0') {
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar9,0);
        }
        if (!bVar4) {
          plVar11 = (long *)plVar8[2];
          if (plVar11 == (long *)0x0) goto LAB_03a6b4cc;
          plVar11 = (long *)(**(code **)(*plVar11 + 0x3b8))
                                      (plVar11,*(undefined8 *)
                                                Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                       ,*(undefined8 *)(*plVar11 + 0x3c0));
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar11);
            }
            FUN_03a66fe0(plVar11,1);
            FUN_03a6b57c(param_1,param_5,plVar11,param_4,param_3 & 1,param_7 & 1);
          }
        }
        plVar8 = (long *)plVar8[2];
        if (plVar8 == (long *)0x0) goto LAB_03a6b4cc;
        iVar7 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        if (iVar7 == 0) {
          uVar9 = FUN_030f28e4(param_6,iVar19,
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
          FUN_03a678a4(param_1,uVar9,0);
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)(param_6 + 0x18));
  }
  return;
}


