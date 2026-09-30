/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsResult$$Warn
ENTRY_POINT: 06869f60
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


void Unity_VisualScripting_FullSerializer_fsResult__Warn
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  double dVar12;
  undefined4 uVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar17;
  undefined8 *unaff_x28;
  undefined8 uVar18;
  undefined8 *unaff_x29;
  float fVar19;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong uStack00000000000000c0;
  ulong uStack00000000000000e8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  double dStack0000000000000110;
  undefined8 in_stack_00000118;
  double dStack0000000000000120;
  ulong uStack0000000000000128;
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
  
  lStack0000000000000138 = param_4._8_8_;
  lStack0000000000000130 = param_4._0_8_;
  uStack0000000000000128 = param_3._8_8_;
  dStack0000000000000120 = param_3._0_8_;
  do {
    dStack0000000000000110 = *(double *)(unaff_x26 + 0x18);
    uVar6 = FUN_0686971c(unaff_x26,unaff_x22);
    lVar11 = *(long *)
              Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
    ;
    if ((in_stack_00000100 & 1) == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar11);
        lVar11 = *(long *)
                  Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
        ;
      }
      lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar17 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar11);
          lVar11 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        uVar18 = **(undefined8 **)(lVar11 + 0xb8);
        lVar17 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Lazy<ExtensionMethodCache>_get_Value__);
        FUN_055e6d08(lVar17,uVar18,
                     *(undefined8 *)
                      Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Value__,0);
        plVar7 = (long *)(*(long *)(*(long *)
                                     Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                   + 0xb8) + 8);
        *plVar7 = lVar17;
        thunk_FUN_0333a630(plVar7,lVar17);
      }
      uVar6 = FUN_0399d870(uVar6,lVar17,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Contains__
                          );
      lVar11 = *(long *)
                Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar11);
        lVar11 = *(long *)
                  Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
        ;
      }
      lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar17 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar11);
          lVar11 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        uVar18 = **(undefined8 **)(lVar11 + 0xb8);
        lVar17 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<DebugManager>_get_Value__);
        Meta_WitAi_Json_WitResponseArray__get_Count
                  (lVar17,uVar18,
                   *(undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>__ctor__
                   ,0);
        plVar7 = (long *)(*(long *)(*(long *)
                                     Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                   + 0xb8) + 0x10);
        *plVar7 = lVar17;
        thunk_FUN_0333a630(plVar7,lVar17);
      }
      uVar6 = FUN_039958c0(uVar6,lVar17,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>__ctor__
                          );
      lVar11 = FUN_039a6ef0(uVar6,*(undefined8 *)
                                   Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>__ctor__);
      lVar17 = FUN_032d5d3c(*(undefined8 *)
                             Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                            ,*(undefined4 *)(unaff_x26 + 0x30));
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Next__
                                );
      FUN_043918b8(lVar8,*(undefined8 *)Method_Unity_VisualScripting_Lerp<Vector3>__ctor__);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (0 < *(int *)(lVar11 + 0x18)) {
        iVar16 = 0;
        do {
          lVar9 = FUN_041e29a8(lVar11,iVar16,*unaff_x21);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          dVar12 = *(double *)(lVar9 + 0x20);
          uVar18 = *(undefined8 *)(lVar9 + 0x18);
          uVar5 = *(ulong *)(lVar9 + 0x10);
          uVar13 = *(undefined4 *)(lVar9 + 0x28);
          uVar2 = *(undefined4 *)(lVar9 + 0x2c);
          uVar6 = *(undefined8 *)(lVar9 + 0x28);
          lVar9 = FUN_041e29a8(lVar11,iVar16,*unaff_x21);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar10 = *(uint *)(lVar9 + 0x30);
          if ((long)(int)uVar10 < (long)(ulong)(uint)(*(int *)(unaff_x26 + 0x30) << 1)) {
            if (lStack0000000000000130 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar1 = uVar10;
            if ((int)uVar10 < 0) {
              uVar1 = uVar10 + 1;
            }
            if (lStack0000000000000138 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            iVar3 = *(int *)(lStack0000000000000138 + 0x18);
            uVar1 = (int)uVar1 >> 1;
            if ((uVar10 & 1) == 0) {
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              piVar14 = (int *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
              uVar13 = 1;
            }
            else {
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              piVar14 = (int *)(lVar17 + (long)(int)uVar1 * 8 + 0x24);
              uVar13 = 2;
            }
            *piVar14 = iVar16 + *(int *)(lStack0000000000000130 + 0x18);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar15 = *unaff_x23;
            lVar9 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar10 = *(uint *)(lVar8 + 0x18);
            iVar3 = uVar1 + iVar3;
            if (uVar10 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar10 + 1;
              lVar9 = lVar9 + (long)(int)uVar10 * 0x20;
              *(int *)(lVar9 + 0x38) = iVar3;
              *(undefined4 *)(lVar9 + 0x3c) = uVar13;
              *(double *)(lVar9 + 0x30) = dVar12;
              *(undefined8 *)(lVar9 + 0x28) = uVar18;
              *(ulong *)(lVar9 + 0x20) = uVar5;
              thunk_FUN_0333a630(lVar9 + 0x28,0);
            }
            else {
              in_stack_00000198 = CONCAT44(uVar13,iVar3);
              in_stack_00000180 = uVar5;
              in_stack_00000188 = uVar18;
              in_stack_00000190 = dVar12;
              FUN_0439218c(lVar8,&stack0x00000180,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar15 = *unaff_x23;
            lVar9 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar10 = *(uint *)(lVar8 + 0x18);
            if (uVar10 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar10 + 1;
              lVar9 = lVar9 + (long)(int)uVar10 * 0x20;
              *(undefined4 *)(lVar9 + 0x38) = uVar13;
              *(undefined4 *)(lVar9 + 0x3c) = uVar2;
              *(double *)(lVar9 + 0x30) = dVar12;
              *(undefined8 *)(lVar9 + 0x28) = uVar18;
              *(ulong *)(lVar9 + 0x20) = uVar5;
              thunk_FUN_0333a630(lVar9 + 0x28,0);
            }
            else {
              in_stack_00000180 = uVar5;
              in_stack_00000188 = uVar18;
              in_stack_00000190 = dVar12;
              in_stack_00000198 = uVar6;
              FUN_0439218c(lVar8,&stack0x00000180,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(lVar11 + 0x18));
      }
      uVar6 = FUN_03986454(lStack0000000000000138,lVar17,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>__ctor__
                          );
      lStack0000000000000138 =
           FUN_039a4828(uVar6,*(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Dictionary__
                       );
      unaff_x28 = (undefined8 *)
                  Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Value__;
      thunk_FUN_0333a630(in_stack_00000018);
      uVar6 = FUN_039864c4(lStack0000000000000130,lVar8,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                          );
      lStack0000000000000130 =
           FUN_039a48b0(uVar6,*(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                       );
      unaff_x27 = (undefined8 *)Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__
      ;
      thunk_FUN_0333a630(in_stack_000001c8);
      unaff_x20 = in_stack_00000020;
      unaff_x22 = in_stack_00000028;
    }
    else {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar11);
        lVar11 = *(long *)
                  Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
        ;
      }
      lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
      if (lVar17 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar11);
          lVar11 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        uVar18 = **(undefined8 **)(lVar11 + 0xb8);
        lVar17 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<ExtensionMethodCache>__ctor__)
        ;
        FUN_055dd3f0(lVar17,uVar18,
                     *(undefined8 *)
                      Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Next__,0);
        plVar7 = (long *)(*(long *)(*(long *)
                                     Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                   + 0xb8) + 0x18);
        *plVar7 = lVar17;
        thunk_FUN_0333a630(plVar7,lVar17);
        unaff_x27 = (undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
      }
      uVar6 = FUN_03995b4c(uVar6,lVar17,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_get_Item__
                          );
      uVar6 = FUN_039864c4(lStack0000000000000130,uVar6,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                          );
      lStack0000000000000130 =
           FUN_039a48b0(uVar6,*(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                       );
      thunk_FUN_0333a630(in_stack_000001c8);
    }
    FUN_049c5244(&stack0x00000180,unaff_x20,
                 *(undefined8 *)
                  Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Next__);
    in_stack_00000188 = in_stack_00000108;
    in_stack_00000180 = in_stack_00000100;
    in_stack_00000198 = in_stack_00000118;
    in_stack_00000190 = dStack0000000000000110;
    in_stack_000001a8 = uStack0000000000000128;
    in_stack_000001a0 = dStack0000000000000120;
    in_stack_000001b8 = lStack0000000000000138;
    in_stack_000001b0 = lStack0000000000000130;
    FUN_049c52e4(unaff_x20,&stack0x00000180,*unaff_x28);
    uVar5 = FUN_052d44b4(&stack0x00000140,*unaff_x29);
    unaff_x26 = in_stack_00000150;
    if ((uVar5 & 1) == 0) {
      FUN_052d44b0(&stack0x00000140,
                   *(undefined8 *)Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>_get_Value__);
      uVar6 = FUN_03995ea8(unaff_x20,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_ChangeItemKey__
                          );
      uVar6 = FUN_039a47a0(uVar6,*(undefined8 *)
                                  Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Remove__
                          );
      *(undefined8 *)(in_stack_00000010 + 0x38) = uVar6;
      thunk_FUN_0333a630();
      return;
    }
    uVar5 = FUN_039779b8(unaff_x20,*unaff_x25);
    if ((uVar5 & 1) == 0) {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
LAB_06869e68:
      uVar18 = *(undefined8 *)(unaff_x26 + 0x10);
      lVar11 = FUN_032d5d3c(*(undefined8 *)Method_System_Lazy<DebugManager>__ctor__,0);
      thunk_FUN_0333a630(in_stack_00000038);
      lVar17 = FUN_032d5d3c(*(undefined8 *)
                             Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                            ,0);
      thunk_FUN_0333a630(in_stack_00000030);
      uStack00000000000000c0 = (ulong)*(uint *)(unaff_x26 + 0x24) << 0x20;
      uStack00000000000000c0 =
           CONCAT53(uStack00000000000000c0._3_5_,*(undefined3 *)(unaff_x26 + 0x20));
      uVar10 = *(uint *)(unaff_x26 + 0x34);
      fVar19 = *(float *)(unaff_x26 + 0x38);
      uVar6 = *(undefined8 *)(unaff_x26 + 0x34);
      uStack00000000000000e8 = 0;
      if (*(long *)(unaff_x26 + 0x40) != 0) {
        uStack00000000000000e8 = FUN_0686a758();
        uVar10 = *(uint *)(unaff_x26 + 0x34);
        fVar19 = *(float *)(unaff_x26 + 0x38);
      }
      uStack00000000000000e8 = uStack00000000000000e8 & 0xffffffff;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      in_stack_00000180 = uStack00000000000000c0;
      in_stack_00000190 = 0.0;
      in_stack_000001a8 = uStack00000000000000e8;
      in_stack_00000188 = uVar18;
      in_stack_00000198 = uVar6;
      in_stack_000001a0 = (double)uVar10 * (double)fVar19;
      in_stack_000001b0 = lVar11;
      in_stack_000001b8 = lVar17;
      FUN_049c52e4(unaff_x20,&stack0x00000180,*unaff_x28);
    }
    else {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      dVar12 = *(double *)(unaff_x26 + 0x10);
      FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
      if (((in_stack_00000190 < dVar12) ||
          (cVar4 = *(char *)(unaff_x26 + 0x20), FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27),
          (cVar4 != '\0') == ((in_stack_00000180 & 1) == 0))) ||
         ((*(char *)(unaff_x26 + 0x20) == '\0' &&
          ((*(char *)(unaff_x26 + 0x21) != '\0' ||
           (FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27), (in_stack_00000180 & 0x10000) != 0)
           ))))) goto LAB_06869e68;
      iVar16 = *(int *)(unaff_x26 + 0x24);
      FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
      if ((iVar16 != in_stack_00000180._4_4_) || (*(int *)(unaff_x26 + 0x34) != 0))
      goto LAB_06869e68;
    }
    FUN_049c5180(&stack0x00000180,unaff_x20,*unaff_x27);
    in_stack_00000108 = in_stack_00000188;
    in_stack_00000100 = in_stack_00000180;
    in_stack_00000118 = in_stack_00000198;
    dStack0000000000000120 = in_stack_000001a0;
    uStack0000000000000128 = in_stack_000001a8;
    lStack0000000000000130 = in_stack_000001b0;
    lStack0000000000000138 = in_stack_000001b8;
  } while( true );
}


