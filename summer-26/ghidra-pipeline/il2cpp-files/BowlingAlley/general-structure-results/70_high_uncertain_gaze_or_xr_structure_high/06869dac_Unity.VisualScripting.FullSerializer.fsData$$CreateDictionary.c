/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsData$$CreateDictionary
ENTRY_POINT: 06869dac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void Unity_VisualScripting_FullSerializer_fsData__CreateDictionary
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  double dVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  double dVar17;
  undefined4 uVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar22;
  undefined8 *unaff_x28;
  undefined8 uVar23;
  undefined8 *unaff_x29;
  float fVar24;
  undefined8 uVar25;
  double dVar26;
  ulong uVar27;
  double unaff_d8;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong uStack00000000000000c0;
  ulong uStack00000000000000e8;
  long lStack0000000000000130;
  long lStack0000000000000138;
  long in_stack_00000150;
  ulong in_stack_00000180;
  undefined8 in_stack_00000188;
  double in_stack_00000190;
  undefined8 in_stack_00000198;
  double in_stack_000001a0;
  ulong in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  undefined8 in_stack_000001c8;
  
  do {
    FUN_049c5180(&stack0x00000180,unaff_x20,param_2);
    if (in_stack_00000190 < unaff_d8) goto LAB_06869e68;
    cVar4 = *(char *)(unaff_x26 + 0x20);
    FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
    if ((cVar4 != '\0') == ((in_stack_00000180 & 1) == 0)) goto LAB_06869e68;
    if (*(char *)(unaff_x26 + 0x20) == '\0') {
      if (*(char *)(unaff_x26 + 0x21) != '\0') goto LAB_06869e68;
      FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
      if ((in_stack_00000180 & 0x10000) != 0) goto LAB_06869e68;
    }
    iVar21 = *(int *)(unaff_x26 + 0x24);
    FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
    if (iVar21 != in_stack_00000180._4_4_) goto LAB_06869e68;
    if (*(int *)(unaff_x26 + 0x34) != 0) goto LAB_06869e68;
    while( true ) {
      FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
      lVar9 = in_stack_000001b8;
      lVar8 = in_stack_000001b0;
      uVar6 = in_stack_000001a8;
      dVar5 = in_stack_000001a0;
      uVar25 = in_stack_00000198;
      uVar14 = in_stack_00000188;
      uVar7 = in_stack_00000180;
      lStack0000000000000138 = in_stack_000001b8;
      dVar26 = *(double *)(unaff_x26 + 0x18);
      uVar10 = FUN_0686971c(unaff_x26,unaff_x22);
      lVar16 = *(long *)
                Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar16);
          lVar16 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
        if (lVar22 == 0) {
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar16);
            lVar16 = *(long *)
                      Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
            ;
          }
          uVar23 = **(undefined8 **)(lVar16 + 0xb8);
          lVar22 = thunk_FUN_032a56a0(*(undefined8 *)
                                       Method_System_Lazy<ExtensionMethodCache>_get_Value__);
          FUN_055e6d08(lVar22,uVar23,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Value__,0
                      );
          plVar11 = (long *)(*(long *)(*(long *)
                                        Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                      + 0xb8) + 8);
          *plVar11 = lVar22;
          thunk_FUN_0333a630(plVar11,lVar22);
        }
        uVar10 = FUN_0399d870(uVar10,lVar22,
                              *(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Contains__
                             );
        lVar16 = *(long *)
                  Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
        ;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar16);
          lVar16 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
        if (lVar22 == 0) {
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar16);
            lVar16 = *(long *)
                      Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
            ;
          }
          uVar23 = **(undefined8 **)(lVar16 + 0xb8);
          lVar22 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<DebugManager>_get_Value__);
          Meta_WitAi_Json_WitResponseArray__get_Count
                    (lVar22,uVar23,
                     *(undefined8 *)
                      Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>__ctor__
                     ,0);
          plVar11 = (long *)(*(long *)(*(long *)
                                        Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                      + 0xb8) + 0x10);
          *plVar11 = lVar22;
          thunk_FUN_0333a630(plVar11,lVar22);
        }
        uVar10 = FUN_039958c0(uVar10,lVar22,
                              *(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>__ctor__
                             );
        lVar16 = FUN_039a6ef0(uVar10,*(undefined8 *)
                                      Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>__ctor__);
        lVar22 = FUN_032d5d3c(*(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                              ,*(undefined4 *)(unaff_x26 + 0x30));
        lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Next__
                                   );
        FUN_043918b8(lVar12,*(undefined8 *)Method_Unity_VisualScripting_Lerp<Vector3>__ctor__);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (0 < *(int *)(lVar16 + 0x18)) {
          iVar21 = 0;
          do {
            lVar13 = FUN_041e29a8(lVar16,iVar21,*unaff_x21);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            dVar17 = *(double *)(lVar13 + 0x20);
            uVar23 = *(undefined8 *)(lVar13 + 0x18);
            uVar27 = *(ulong *)(lVar13 + 0x10);
            uVar18 = *(undefined4 *)(lVar13 + 0x28);
            uVar2 = *(undefined4 *)(lVar13 + 0x2c);
            uVar10 = *(undefined8 *)(lVar13 + 0x28);
            lVar13 = FUN_041e29a8(lVar16,iVar21,*unaff_x21);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar15 = *(uint *)(lVar13 + 0x30);
            if ((long)(int)uVar15 < (long)(ulong)(uint)(*(int *)(unaff_x26 + 0x30) << 1)) {
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar1 = uVar15;
              if ((int)uVar15 < 0) {
                uVar1 = uVar15 + 1;
              }
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              iVar3 = *(int *)(lVar9 + 0x18);
              uVar1 = (int)uVar1 >> 1;
              if ((uVar15 & 1) == 0) {
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                if (*(uint *)(lVar22 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                piVar19 = (int *)(lVar22 + (long)(int)uVar1 * 8 + 0x20);
                uVar18 = 1;
              }
              else {
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                if (*(uint *)(lVar22 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                piVar19 = (int *)(lVar22 + (long)(int)uVar1 * 8 + 0x24);
                uVar18 = 2;
              }
              *piVar19 = iVar21 + *(int *)(lVar8 + 0x18);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar20 = *unaff_x23;
              lVar13 = *(long *)(lVar12 + 0x10);
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar15 = *(uint *)(lVar12 + 0x18);
              iVar3 = uVar1 + iVar3;
              if (uVar15 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar15 + 1;
                lVar13 = lVar13 + (long)(int)uVar15 * 0x20;
                *(int *)(lVar13 + 0x38) = iVar3;
                *(undefined4 *)(lVar13 + 0x3c) = uVar18;
                *(double *)(lVar13 + 0x30) = dVar17;
                *(undefined8 *)(lVar13 + 0x28) = uVar23;
                *(ulong *)(lVar13 + 0x20) = uVar27;
                thunk_FUN_0333a630(lVar13 + 0x28,0);
              }
              else {
                in_stack_00000198 = CONCAT44(uVar18,iVar3);
                in_stack_00000180 = uVar27;
                in_stack_00000188 = uVar23;
                in_stack_00000190 = dVar17;
                FUN_0439218c(lVar12,&stack0x00000180,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar20 = *unaff_x23;
              lVar13 = *(long *)(lVar12 + 0x10);
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar15 = *(uint *)(lVar12 + 0x18);
              if (uVar15 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar15 + 1;
                lVar13 = lVar13 + (long)(int)uVar15 * 0x20;
                *(undefined4 *)(lVar13 + 0x38) = uVar18;
                *(undefined4 *)(lVar13 + 0x3c) = uVar2;
                *(double *)(lVar13 + 0x30) = dVar17;
                *(undefined8 *)(lVar13 + 0x28) = uVar23;
                *(ulong *)(lVar13 + 0x20) = uVar27;
                thunk_FUN_0333a630(lVar13 + 0x28,0);
              }
              else {
                in_stack_00000180 = uVar27;
                in_stack_00000188 = uVar23;
                in_stack_00000190 = dVar17;
                in_stack_00000198 = uVar10;
                FUN_0439218c(lVar12,&stack0x00000180,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < *(int *)(lVar16 + 0x18));
        }
        uVar10 = FUN_03986454(lVar9,lVar22,
                              *(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>__ctor__
                             );
        lStack0000000000000138 =
             FUN_039a4828(uVar10,*(undefined8 *)
                                  Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Dictionary__
                         );
        unaff_x28 = (undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Value__;
        thunk_FUN_0333a630(in_stack_00000018);
        uVar10 = FUN_039864c4(lVar8,lVar12,
                              *(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                             );
        lStack0000000000000130 =
             FUN_039a48b0(uVar10,*(undefined8 *)
                                  Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                         );
        unaff_x27 = (undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
        thunk_FUN_0333a630(in_stack_000001c8);
        unaff_x20 = in_stack_00000020;
        unaff_x22 = in_stack_00000028;
      }
      else {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar16);
          lVar16 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        lVar9 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
        if (lVar9 == 0) {
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar16);
            lVar16 = *(long *)
                      Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
            ;
          }
          uVar23 = **(undefined8 **)(lVar16 + 0xb8);
          lVar9 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<ExtensionMethodCache>__ctor__
                                    );
          FUN_055dd3f0(lVar9,uVar23,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Next__,0)
          ;
          plVar11 = (long *)(*(long *)(*(long *)
                                        Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                      + 0xb8) + 0x18);
          *plVar11 = lVar9;
          thunk_FUN_0333a630(plVar11,lVar9);
          unaff_x27 = (undefined8 *)
                      Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
        }
        uVar10 = FUN_03995b4c(uVar10,lVar9,
                              *(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_get_Item__
                             );
        uVar10 = FUN_039864c4(lVar8,uVar10,
                              *(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                             );
        lStack0000000000000130 =
             FUN_039a48b0(uVar10,*(undefined8 *)
                                  Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                         );
        thunk_FUN_0333a630(in_stack_000001c8);
      }
      FUN_049c5244(&stack0x00000180,unaff_x20,
                   *(undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Next__);
      in_stack_000001b8 = lStack0000000000000138;
      in_stack_000001b0 = lStack0000000000000130;
      in_stack_00000180 = uVar7;
      in_stack_00000188 = uVar14;
      in_stack_00000190 = dVar26;
      in_stack_00000198 = uVar25;
      in_stack_000001a0 = dVar5;
      in_stack_000001a8 = uVar6;
      FUN_049c52e4(unaff_x20,&stack0x00000180,*unaff_x28);
      uVar7 = FUN_052d44b4(&stack0x00000140,*unaff_x29);
      unaff_x26 = in_stack_00000150;
      if ((uVar7 & 1) == 0) {
        FUN_052d44b0(&stack0x00000140,
                     *(undefined8 *)Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>_get_Value__);
        uVar14 = FUN_03995ea8(unaff_x20,
                              *(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_ChangeItemKey__
                             );
        uVar14 = FUN_039a47a0(uVar14,*(undefined8 *)
                                      Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Remove__
                             );
        *(undefined8 *)(in_stack_00000010 + 0x38) = uVar14;
        thunk_FUN_0333a630();
        return;
      }
      uVar7 = FUN_039779b8(unaff_x20,*unaff_x25);
      if ((uVar7 & 1) != 0) break;
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
LAB_06869e68:
      uVar25 = *(undefined8 *)(unaff_x26 + 0x10);
      lVar8 = FUN_032d5d3c(*(undefined8 *)Method_System_Lazy<DebugManager>__ctor__,0);
      thunk_FUN_0333a630(in_stack_00000038);
      lVar9 = FUN_032d5d3c(*(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                           ,0);
      thunk_FUN_0333a630(in_stack_00000030);
      uStack00000000000000c0 = (ulong)*(uint *)(unaff_x26 + 0x24) << 0x20;
      uStack00000000000000c0 =
           CONCAT53(uStack00000000000000c0._3_5_,*(undefined3 *)(unaff_x26 + 0x20));
      uVar15 = *(uint *)(unaff_x26 + 0x34);
      fVar24 = *(float *)(unaff_x26 + 0x38);
      uVar14 = *(undefined8 *)(unaff_x26 + 0x34);
      uStack00000000000000e8 = 0;
      if (*(long *)(unaff_x26 + 0x40) != 0) {
        uStack00000000000000e8 = FUN_0686a758();
        uVar15 = *(uint *)(unaff_x26 + 0x34);
        fVar24 = *(float *)(unaff_x26 + 0x38);
      }
      uStack00000000000000e8 = uStack00000000000000e8 & 0xffffffff;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      in_stack_00000180 = uStack00000000000000c0;
      in_stack_00000190 = 0.0;
      in_stack_000001a8 = uStack00000000000000e8;
      in_stack_00000188 = uVar25;
      in_stack_00000198 = uVar14;
      in_stack_000001a0 = (double)uVar15 * (double)fVar24;
      in_stack_000001b0 = lVar8;
      in_stack_000001b8 = lVar9;
      FUN_049c52e4(unaff_x20,&stack0x00000180,*unaff_x28);
    }
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    unaff_d8 = *(double *)(unaff_x26 + 0x10);
    param_2 = *unaff_x27;
  } while( true );
}


