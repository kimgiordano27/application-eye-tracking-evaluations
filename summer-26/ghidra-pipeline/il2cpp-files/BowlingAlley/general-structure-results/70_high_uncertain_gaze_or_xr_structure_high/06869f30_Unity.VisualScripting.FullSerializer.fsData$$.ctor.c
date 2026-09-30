/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsData$$.ctor
ENTRY_POINT: 06869f30
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


void Unity_VisualScripting_FullSerializer_fsData___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  double dVar16;
  undefined4 uVar17;
  int *piVar18;
  long lVar19;
  int iVar20;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar21;
  undefined8 *unaff_x28;
  undefined8 uVar22;
  undefined8 *unaff_x29;
  float fVar23;
  undefined8 uVar24;
  double dVar25;
  ulong uVar26;
  double dVar27;
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
  ulong uStack0000000000000180;
  undefined8 uStack0000000000000188;
  double dStack0000000000000190;
  undefined8 uStack0000000000000198;
  double dStack00000000000001a0;
  ulong uStack00000000000001a8;
  long lStack00000000000001b0;
  long lStack00000000000001b8;
  undefined8 in_stack_000001c8;
  
  lVar8 = param_4._8_8_;
  lVar7 = param_4._0_8_;
  uStack00000000000000e8 = param_3._8_8_;
  dVar27 = param_3._0_8_;
  uVar13 = param_2._8_8_;
  dStack0000000000000190 = param_2._0_8_;
  uVar24 = param_1._8_8_;
  uStack00000000000000c0 = param_1._0_8_;
  do {
    uStack0000000000000180 = uStack00000000000000c0;
    uStack0000000000000188 = uVar24;
    uStack0000000000000198 = uVar13;
    dStack00000000000001a0 = dVar27;
    uStack00000000000001a8 = uStack00000000000000e8;
    lStack00000000000001b0 = lVar7;
    lStack00000000000001b8 = lVar8;
    FUN_049c52e4(unaff_x20,&stack0x00000180,param_7);
    while( true ) {
      FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
      lVar8 = lStack00000000000001b8;
      lVar7 = lStack00000000000001b0;
      uVar5 = uStack00000000000001a8;
      dVar27 = dStack00000000000001a0;
      uVar24 = uStack0000000000000198;
      uVar13 = uStack0000000000000188;
      uVar6 = uStack0000000000000180;
      lStack0000000000000138 = lStack00000000000001b8;
      dVar25 = *(double *)(unaff_x26 + 0x18);
      uVar9 = FUN_0686971c(unaff_x26,unaff_x22);
      lVar15 = *(long *)
                Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
      if ((uVar6 & 1) == 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar15);
          lVar15 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        lVar21 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
        if (lVar21 == 0) {
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar15);
            lVar15 = *(long *)
                      Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
            ;
          }
          uVar22 = **(undefined8 **)(lVar15 + 0xb8);
          lVar21 = thunk_FUN_032a56a0(*(undefined8 *)
                                       Method_System_Lazy<ExtensionMethodCache>_get_Value__);
          FUN_055e6d08(lVar21,uVar22,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Value__,0
                      );
          plVar10 = (long *)(*(long *)(*(long *)
                                        Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                      + 0xb8) + 8);
          *plVar10 = lVar21;
          thunk_FUN_0333a630(plVar10,lVar21);
        }
        uVar9 = FUN_0399d870(uVar9,lVar21,
                             *(undefined8 *)
                              Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Contains__
                            );
        lVar15 = *(long *)
                  Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
        ;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar15);
          lVar15 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        lVar21 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
        if (lVar21 == 0) {
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar15);
            lVar15 = *(long *)
                      Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
            ;
          }
          uVar22 = **(undefined8 **)(lVar15 + 0xb8);
          lVar21 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<DebugManager>_get_Value__);
          Meta_WitAi_Json_WitResponseArray__get_Count
                    (lVar21,uVar22,
                     *(undefined8 *)
                      Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>__ctor__
                     ,0);
          plVar10 = (long *)(*(long *)(*(long *)
                                        Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                      + 0xb8) + 0x10);
          *plVar10 = lVar21;
          thunk_FUN_0333a630(plVar10,lVar21);
        }
        uVar9 = FUN_039958c0(uVar9,lVar21,
                             *(undefined8 *)
                              Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>__ctor__
                            );
        lVar15 = FUN_039a6ef0(uVar9,*(undefined8 *)
                                     Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>__ctor__);
        lVar21 = FUN_032d5d3c(*(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                              ,*(undefined4 *)(unaff_x26 + 0x30));
        lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Next__
                                   );
        FUN_043918b8(lVar11,*(undefined8 *)Method_Unity_VisualScripting_Lerp<Vector3>__ctor__);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (0 < *(int *)(lVar15 + 0x18)) {
          iVar20 = 0;
          do {
            lVar12 = FUN_041e29a8(lVar15,iVar20,*unaff_x21);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            dVar16 = *(double *)(lVar12 + 0x20);
            uVar22 = *(undefined8 *)(lVar12 + 0x18);
            uVar26 = *(ulong *)(lVar12 + 0x10);
            uVar17 = *(undefined4 *)(lVar12 + 0x28);
            uVar2 = *(undefined4 *)(lVar12 + 0x2c);
            uVar9 = *(undefined8 *)(lVar12 + 0x28);
            lVar12 = FUN_041e29a8(lVar15,iVar20,*unaff_x21);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar14 = *(uint *)(lVar12 + 0x30);
            if ((long)(int)uVar14 < (long)(ulong)(uint)(*(int *)(unaff_x26 + 0x30) << 1)) {
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar1 = uVar14;
              if ((int)uVar14 < 0) {
                uVar1 = uVar14 + 1;
              }
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              iVar3 = *(int *)(lVar8 + 0x18);
              uVar1 = (int)uVar1 >> 1;
              if ((uVar14 & 1) == 0) {
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                piVar18 = (int *)(lVar21 + (long)(int)uVar1 * 8 + 0x20);
                uVar17 = 1;
              }
              else {
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                piVar18 = (int *)(lVar21 + (long)(int)uVar1 * 8 + 0x24);
                uVar17 = 2;
              }
              *piVar18 = iVar20 + *(int *)(lVar7 + 0x18);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar19 = *unaff_x23;
              lVar12 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar14 = *(uint *)(lVar11 + 0x18);
              iVar3 = uVar1 + iVar3;
              if (uVar14 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar14 + 1;
                lVar12 = lVar12 + (long)(int)uVar14 * 0x20;
                *(int *)(lVar12 + 0x38) = iVar3;
                *(undefined4 *)(lVar12 + 0x3c) = uVar17;
                *(double *)(lVar12 + 0x30) = dVar16;
                *(undefined8 *)(lVar12 + 0x28) = uVar22;
                *(ulong *)(lVar12 + 0x20) = uVar26;
                thunk_FUN_0333a630(lVar12 + 0x28,0);
              }
              else {
                uStack0000000000000198 = CONCAT44(uVar17,iVar3);
                uStack0000000000000180 = uVar26;
                uStack0000000000000188 = uVar22;
                dStack0000000000000190 = dVar16;
                FUN_0439218c(lVar11,&stack0x00000180,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar19 = *unaff_x23;
              lVar12 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar14 = *(uint *)(lVar11 + 0x18);
              if (uVar14 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar14 + 1;
                lVar12 = lVar12 + (long)(int)uVar14 * 0x20;
                *(undefined4 *)(lVar12 + 0x38) = uVar17;
                *(undefined4 *)(lVar12 + 0x3c) = uVar2;
                *(double *)(lVar12 + 0x30) = dVar16;
                *(undefined8 *)(lVar12 + 0x28) = uVar22;
                *(ulong *)(lVar12 + 0x20) = uVar26;
                thunk_FUN_0333a630(lVar12 + 0x28,0);
              }
              else {
                uStack0000000000000180 = uVar26;
                uStack0000000000000188 = uVar22;
                dStack0000000000000190 = dVar16;
                uStack0000000000000198 = uVar9;
                FUN_0439218c(lVar11,&stack0x00000180,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            iVar20 = iVar20 + 1;
          } while (iVar20 < *(int *)(lVar15 + 0x18));
        }
        uVar9 = FUN_03986454(lVar8,lVar21,
                             *(undefined8 *)
                              Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>__ctor__
                            );
        lStack0000000000000138 =
             FUN_039a4828(uVar9,*(undefined8 *)
                                 Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Dictionary__
                         );
        unaff_x28 = (undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Value__;
        thunk_FUN_0333a630(in_stack_00000018);
        uVar9 = FUN_039864c4(lVar7,lVar11,
                             *(undefined8 *)
                              Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                            );
        lStack0000000000000130 =
             FUN_039a48b0(uVar9,*(undefined8 *)
                                 Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                         );
        unaff_x27 = (undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
        thunk_FUN_0333a630(in_stack_000001c8);
        unaff_x20 = in_stack_00000020;
        unaff_x22 = in_stack_00000028;
      }
      else {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar15);
          lVar15 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        lVar8 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x18);
        if (lVar8 == 0) {
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar15);
            lVar15 = *(long *)
                      Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
            ;
          }
          uVar22 = **(undefined8 **)(lVar15 + 0xb8);
          lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<ExtensionMethodCache>__ctor__
                                    );
          FUN_055dd3f0(lVar8,uVar22,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Next__,0)
          ;
          plVar10 = (long *)(*(long *)(*(long *)
                                        Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                      + 0xb8) + 0x18);
          *plVar10 = lVar8;
          thunk_FUN_0333a630(plVar10,lVar8);
          unaff_x27 = (undefined8 *)
                      Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
        }
        uVar9 = FUN_03995b4c(uVar9,lVar8,
                             *(undefined8 *)
                              Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_get_Item__
                            );
        uVar9 = FUN_039864c4(lVar7,uVar9,
                             *(undefined8 *)
                              Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                            );
        lStack0000000000000130 =
             FUN_039a48b0(uVar9,*(undefined8 *)
                                 Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                         );
        thunk_FUN_0333a630(in_stack_000001c8);
      }
      FUN_049c5244(&stack0x00000180,unaff_x20,
                   *(undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Next__);
      lStack00000000000001b8 = lStack0000000000000138;
      lStack00000000000001b0 = lStack0000000000000130;
      uStack0000000000000180 = uVar6;
      uStack0000000000000188 = uVar13;
      dStack0000000000000190 = dVar25;
      uStack0000000000000198 = uVar24;
      dStack00000000000001a0 = dVar27;
      uStack00000000000001a8 = uVar5;
      FUN_049c52e4(unaff_x20,&stack0x00000180,*unaff_x28);
      uVar6 = FUN_052d44b4(&stack0x00000140,*unaff_x29);
      unaff_x26 = in_stack_00000150;
      if ((uVar6 & 1) == 0) {
        FUN_052d44b0(&stack0x00000140,
                     *(undefined8 *)Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>_get_Value__);
        uVar13 = FUN_03995ea8(unaff_x20,
                              *(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_ChangeItemKey__
                             );
        uVar13 = FUN_039a47a0(uVar13,*(undefined8 *)
                                      Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Remove__
                             );
        *(undefined8 *)(in_stack_00000010 + 0x38) = uVar13;
        thunk_FUN_0333a630();
        return;
      }
      uVar6 = FUN_039779b8(unaff_x20,*unaff_x25);
      if ((uVar6 & 1) == 0) break;
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      dVar27 = *(double *)(unaff_x26 + 0x10);
      FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
      if (((dStack0000000000000190 < dVar27) ||
          (cVar4 = *(char *)(unaff_x26 + 0x20), FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27),
          (cVar4 != '\0') == ((uStack0000000000000180 & 1) == 0))) ||
         ((*(char *)(unaff_x26 + 0x20) == '\0' &&
          ((*(char *)(unaff_x26 + 0x21) != '\0' ||
           (FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27),
           (uStack0000000000000180 & 0x10000) != 0)))))) goto LAB_06869e68;
      iVar20 = *(int *)(unaff_x26 + 0x24);
      FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
      if ((iVar20 != uStack0000000000000180._4_4_) || (*(int *)(unaff_x26 + 0x34) != 0))
      goto LAB_06869e68;
    }
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
LAB_06869e68:
    uVar24 = *(undefined8 *)(unaff_x26 + 0x10);
    lVar7 = FUN_032d5d3c(*(undefined8 *)Method_System_Lazy<DebugManager>__ctor__,0);
    thunk_FUN_0333a630(in_stack_00000038);
    lVar8 = FUN_032d5d3c(*(undefined8 *)
                          Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                         ,0);
    thunk_FUN_0333a630(in_stack_00000030);
    uStack00000000000000c0 = (ulong)*(uint *)(unaff_x26 + 0x24) << 0x20;
    uStack00000000000000c0 =
         CONCAT53(uStack00000000000000c0._3_5_,*(undefined3 *)(unaff_x26 + 0x20));
    uVar14 = *(uint *)(unaff_x26 + 0x34);
    fVar23 = *(float *)(unaff_x26 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x26 + 0x34);
    uStack00000000000000e8 = 0;
    if (*(long *)(unaff_x26 + 0x40) != 0) {
      uStack00000000000000e8 = FUN_0686a758();
      uVar14 = *(uint *)(unaff_x26 + 0x34);
      fVar23 = *(float *)(unaff_x26 + 0x38);
    }
    dVar27 = (double)uVar14 * (double)fVar23;
    uStack00000000000000e8 = uStack00000000000000e8 & 0xffffffff;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    dStack0000000000000190 = 0.0;
    param_7 = *unaff_x28;
  } while( true );
}


