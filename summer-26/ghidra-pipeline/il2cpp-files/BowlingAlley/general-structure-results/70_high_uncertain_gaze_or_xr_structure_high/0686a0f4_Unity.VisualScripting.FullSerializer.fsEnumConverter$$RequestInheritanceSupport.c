/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsEnumConverter$$RequestInheritanceSupport
ENTRY_POINT: 0686a0f4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


void Unity_VisualScripting_FullSerializer_fsEnumConverter__RequestInheritanceSupport
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  double dVar14;
  undefined4 uVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  long unaff_x26;
  long unaff_x27;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *unaff_x29;
  float fVar21;
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
  double in_stack_00000110;
  undefined8 in_stack_00000118;
  double in_stack_00000120;
  ulong in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
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
  
code_r0x0686a0f4:
  uVar8 = FUN_039958c0(param_1,unaff_x27,param_3);
  lVar9 = FUN_039a6ef0(uVar8,*(undefined8 *)
                              Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>__ctor__);
  lVar10 = FUN_032d5d3c(*(undefined8 *)
                         Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                        ,*(undefined4 *)(unaff_x26 + 0x30));
  lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                               Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Next__
                             );
  FUN_043918b8(lVar11,*(undefined8 *)Method_Unity_VisualScripting_Lerp<Vector3>__ctor__);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (0 < *(int *)(lVar9 + 0x18)) {
    iVar18 = 0;
    do {
      lVar12 = FUN_041e29a8(lVar9,iVar18,*unaff_x21);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      dVar14 = *(double *)(lVar12 + 0x20);
      uVar20 = *(undefined8 *)(lVar12 + 0x18);
      uVar6 = *(ulong *)(lVar12 + 0x10);
      uVar15 = *(undefined4 *)(lVar12 + 0x28);
      uVar2 = *(undefined4 *)(lVar12 + 0x2c);
      uVar8 = *(undefined8 *)(lVar12 + 0x28);
      lVar12 = FUN_041e29a8(lVar9,iVar18,*unaff_x21);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar13 = *(uint *)(lVar12 + 0x30);
      if ((long)(int)uVar13 < (long)(ulong)(uint)(*(int *)(unaff_x26 + 0x30) << 1)) {
        if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar1 = uVar13;
        if ((int)uVar13 < 0) {
          uVar1 = uVar13 + 1;
        }
        if (in_stack_00000138 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        iVar3 = *(int *)(in_stack_00000138 + 0x18);
        uVar1 = (int)uVar1 >> 1;
        if ((uVar13 & 1) == 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          piVar16 = (int *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          uVar15 = 1;
        }
        else {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          piVar16 = (int *)(lVar10 + (long)(int)uVar1 * 8 + 0x24);
          uVar15 = 2;
        }
        *piVar16 = iVar18 + *(int *)(in_stack_00000130 + 0x18);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar17 = *unaff_x23;
        lVar12 = *(long *)(lVar11 + 0x10);
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar13 = *(uint *)(lVar11 + 0x18);
        iVar3 = uVar1 + iVar3;
        if (uVar13 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar13 + 1;
          lVar12 = lVar12 + (long)(int)uVar13 * 0x20;
          *(int *)(lVar12 + 0x38) = iVar3;
          *(undefined4 *)(lVar12 + 0x3c) = uVar15;
          *(double *)(lVar12 + 0x30) = dVar14;
          *(undefined8 *)(lVar12 + 0x28) = uVar20;
          *(ulong *)(lVar12 + 0x20) = uVar6;
          thunk_FUN_0333a630(lVar12 + 0x28,0);
        }
        else {
          in_stack_00000198 = CONCAT44(uVar15,iVar3);
          in_stack_00000180 = uVar6;
          in_stack_00000188 = uVar20;
          in_stack_00000190 = dVar14;
          FUN_0439218c(lVar11,&stack0x00000180,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar17 = *unaff_x23;
        lVar12 = *(long *)(lVar11 + 0x10);
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar13 = *(uint *)(lVar11 + 0x18);
        if (uVar13 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar13 + 1;
          lVar12 = lVar12 + (long)(int)uVar13 * 0x20;
          *(undefined4 *)(lVar12 + 0x38) = uVar15;
          *(undefined4 *)(lVar12 + 0x3c) = uVar2;
          *(double *)(lVar12 + 0x30) = dVar14;
          *(undefined8 *)(lVar12 + 0x28) = uVar20;
          *(ulong *)(lVar12 + 0x20) = uVar6;
          thunk_FUN_0333a630(lVar12 + 0x28,0);
        }
        else {
          in_stack_00000180 = uVar6;
          in_stack_00000188 = uVar20;
          in_stack_00000190 = dVar14;
          in_stack_00000198 = uVar8;
          FUN_0439218c(lVar11,&stack0x00000180,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(lVar9 + 0x18));
  }
  uVar8 = FUN_03986454(in_stack_00000138,lVar10,
                       *(undefined8 *)
                        Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>__ctor__
                      );
  in_stack_00000138 =
       FUN_039a4828(uVar8,*(undefined8 *)
                           Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Dictionary__
                   );
  puVar5 = Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Value__;
  thunk_FUN_0333a630(in_stack_00000018);
  uVar8 = FUN_039864c4(in_stack_00000130,lVar11,
                       *(undefined8 *)
                        Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                      );
  in_stack_00000130 =
       FUN_039a48b0(uVar8,*(undefined8 *)
                           Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                   );
  puVar19 = (undefined8 *)Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
  thunk_FUN_0333a630(in_stack_000001c8);
  do {
    FUN_049c5244(&stack0x00000180,in_stack_00000020,
                 *(undefined8 *)
                  Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Next__);
    in_stack_00000188 = in_stack_00000108;
    in_stack_00000180 = in_stack_00000100;
    in_stack_00000198 = in_stack_00000118;
    in_stack_00000190 = in_stack_00000110;
    in_stack_000001a8 = in_stack_00000128;
    in_stack_000001a0 = in_stack_00000120;
    in_stack_000001b8 = in_stack_00000138;
    in_stack_000001b0 = in_stack_00000130;
    FUN_049c52e4(in_stack_00000020,&stack0x00000180,*(undefined8 *)puVar5);
    uVar6 = FUN_052d44b4(&stack0x00000140,*unaff_x29);
    unaff_x26 = in_stack_00000150;
    if ((uVar6 & 1) == 0) {
      FUN_052d44b0(&stack0x00000140,
                   *(undefined8 *)Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>_get_Value__);
      uVar8 = FUN_03995ea8(in_stack_00000020,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_ChangeItemKey__
                          );
      uVar8 = FUN_039a47a0(uVar8,*(undefined8 *)
                                  Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Remove__
                          );
      *(undefined8 *)(in_stack_00000010 + 0x38) = uVar8;
      thunk_FUN_0333a630();
      return;
    }
    uVar6 = FUN_039779b8(in_stack_00000020,*unaff_x20);
    if ((uVar6 & 1) == 0) {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
LAB_06869e68:
      uVar20 = *(undefined8 *)(unaff_x26 + 0x10);
      lVar9 = FUN_032d5d3c(*(undefined8 *)Method_System_Lazy<DebugManager>__ctor__,0);
      thunk_FUN_0333a630(in_stack_00000038);
      lVar10 = FUN_032d5d3c(*(undefined8 *)
                             Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                            ,0);
      thunk_FUN_0333a630(in_stack_00000030);
      uStack00000000000000c0 = (ulong)*(uint *)(unaff_x26 + 0x24) << 0x20;
      uStack00000000000000c0 =
           CONCAT53(uStack00000000000000c0._3_5_,*(undefined3 *)(unaff_x26 + 0x20));
      uVar13 = *(uint *)(unaff_x26 + 0x34);
      fVar21 = *(float *)(unaff_x26 + 0x38);
      uVar8 = *(undefined8 *)(unaff_x26 + 0x34);
      uStack00000000000000e8 = 0;
      if (*(long *)(unaff_x26 + 0x40) != 0) {
        uStack00000000000000e8 = FUN_0686a758();
        uVar13 = *(uint *)(unaff_x26 + 0x34);
        fVar21 = *(float *)(unaff_x26 + 0x38);
      }
      uStack00000000000000e8 = uStack00000000000000e8 & 0xffffffff;
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      in_stack_00000180 = uStack00000000000000c0;
      in_stack_00000190 = 0.0;
      in_stack_000001a8 = uStack00000000000000e8;
      in_stack_00000188 = uVar20;
      in_stack_00000198 = uVar8;
      in_stack_000001a0 = (double)uVar13 * (double)fVar21;
      in_stack_000001b0 = lVar9;
      in_stack_000001b8 = lVar10;
      FUN_049c52e4(in_stack_00000020,&stack0x00000180,*(undefined8 *)puVar5);
    }
    else {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      dVar14 = *(double *)(unaff_x26 + 0x10);
      FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar19);
      if (((in_stack_00000190 < dVar14) ||
          (cVar4 = *(char *)(unaff_x26 + 0x20),
          FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar19),
          (cVar4 != '\0') == ((in_stack_00000180 & 1) == 0))) ||
         ((*(char *)(unaff_x26 + 0x20) == '\0' &&
          ((*(char *)(unaff_x26 + 0x21) != '\0' ||
           (FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar19),
           (in_stack_00000180 & 0x10000) != 0)))))) goto LAB_06869e68;
      iVar18 = *(int *)(unaff_x26 + 0x24);
      FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar19);
      if ((iVar18 != in_stack_00000180._4_4_) || (*(int *)(unaff_x26 + 0x34) != 0))
      goto LAB_06869e68;
    }
    FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar19);
    lVar9 = in_stack_000001b0;
    uVar6 = in_stack_00000180;
    in_stack_00000108 = in_stack_00000188;
    in_stack_00000100 = in_stack_00000180;
    in_stack_00000118 = in_stack_00000198;
    in_stack_00000128 = in_stack_000001a8;
    in_stack_00000120 = in_stack_000001a0;
    in_stack_00000138 = in_stack_000001b8;
    in_stack_00000130 = in_stack_000001b0;
    in_stack_00000110 = *(double *)(unaff_x26 + 0x18);
    uVar8 = FUN_0686971c(unaff_x26,in_stack_00000028);
    lVar10 = *(long *)
              Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
    ;
    if ((uVar6 & 1) == 0) break;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar10);
      lVar10 = *(long *)
                Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
    }
    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
    if (lVar11 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar10);
        lVar10 = *(long *)
                  Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
        ;
      }
      uVar20 = **(undefined8 **)(lVar10 + 0xb8);
      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<ExtensionMethodCache>__ctor__);
      FUN_055dd3f0(lVar11,uVar20,
                   *(undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Next__,0);
      plVar7 = (long *)(*(long *)(*(long *)
                                   Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                 + 0xb8) + 0x18);
      *plVar7 = lVar11;
      thunk_FUN_0333a630(plVar7,lVar11);
      puVar19 = (undefined8 *)Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
    }
    uVar8 = FUN_03995b4c(uVar8,lVar11,
                         *(undefined8 *)
                          Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_get_Item__
                        );
    uVar8 = FUN_039864c4(lVar9,uVar8,
                         *(undefined8 *)
                          Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                        );
    in_stack_00000130 =
         FUN_039a48b0(uVar8,*(undefined8 *)
                             Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                     );
    thunk_FUN_0333a630(in_stack_000001c8);
  } while( true );
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar10);
    lVar10 = *(long *)
              Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
    ;
  }
  lVar9 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar10);
      lVar10 = *(long *)
                Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
    }
    uVar20 = **(undefined8 **)(lVar10 + 0xb8);
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<ExtensionMethodCache>_get_Value__);
    FUN_055e6d08(lVar9,uVar20,
                 *(undefined8 *)
                  Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Value__,0);
    plVar7 = (long *)(*(long *)(*(long *)
                                 Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                               + 0xb8) + 8);
    *plVar7 = lVar9;
    thunk_FUN_0333a630(plVar7,lVar9);
  }
  param_1 = FUN_0399d870(uVar8,lVar9,
                         *(undefined8 *)
                          Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Contains__
                        );
  lVar9 = *(long *)
           Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
  ;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar9);
    lVar9 = *(long *)
             Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
    ;
  }
  unaff_x27 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (unaff_x27 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar9 = *(long *)
               Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
    }
    uVar8 = **(undefined8 **)(lVar9 + 0xb8);
    unaff_x27 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<DebugManager>_get_Value__);
    Meta_WitAi_Json_WitResponseArray__get_Count
              (unaff_x27,uVar8,
               *(undefined8 *)
                Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>__ctor__
               ,0);
    plVar7 = (long *)(*(long *)(*(long *)
                                 Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                               + 0xb8) + 0x10);
    *plVar7 = unaff_x27;
    thunk_FUN_0333a630(plVar7,unaff_x27);
  }
  param_3 = *(undefined8 *)
             Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>__ctor__
  ;
  goto code_r0x0686a0f4;
}


