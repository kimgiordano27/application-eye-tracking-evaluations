/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsEnumConverter$$CanProcess
ENTRY_POINT: 0686a07c
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


void Unity_VisualScripting_FullSerializer_fsEnumConverter__CanProcess(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  double dVar13;
  undefined4 uVar14;
  int *piVar15;
  long lVar16;
  int iVar17;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *puVar18;
  undefined8 uVar19;
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
  
code_r0x0686a07c:
  thunk_FUN_032cd7c0(param_1);
  param_1 = *(long *)
             Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
  ;
LAB_0686a090:
  uVar20 = **(undefined8 **)(param_1 + 0xb8);
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<DebugManager>_get_Value__);
  Meta_WitAi_Json_WitResponseArray__get_Count
            (lVar7,uVar20,
             *(undefined8 *)
              Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>__ctor__
             ,0);
  plVar8 = (long *)(*(long *)(*(long *)
                               Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                             + 0xb8) + 0x10);
  *plVar8 = lVar7;
  thunk_FUN_0333a630(plVar8,lVar7);
LAB_0686a0e0:
  uVar20 = FUN_039958c0(unaff_x19,lVar7,
                        *(undefined8 *)
                         Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>__ctor__
                       );
  lVar7 = FUN_039a6ef0(uVar20,*(undefined8 *)
                               Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>__ctor__);
  lVar9 = FUN_032d5d3c(*(undefined8 *)
                        Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                       ,*(undefined4 *)(unaff_x26 + 0x30));
  lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                               Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Next__
                             );
  FUN_043918b8(lVar10,*(undefined8 *)Method_Unity_VisualScripting_Lerp<Vector3>__ctor__);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (0 < *(int *)(lVar7 + 0x18)) {
    iVar17 = 0;
    do {
      lVar11 = FUN_041e29a8(lVar7,iVar17,*unaff_x21);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      dVar13 = *(double *)(lVar11 + 0x20);
      uVar19 = *(undefined8 *)(lVar11 + 0x18);
      uVar6 = *(ulong *)(lVar11 + 0x10);
      uVar14 = *(undefined4 *)(lVar11 + 0x28);
      uVar2 = *(undefined4 *)(lVar11 + 0x2c);
      uVar20 = *(undefined8 *)(lVar11 + 0x28);
      lVar11 = FUN_041e29a8(lVar7,iVar17,*unaff_x21);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar12 = *(uint *)(lVar11 + 0x30);
      if ((long)(int)uVar12 < (long)(ulong)(uint)(*(int *)(unaff_x26 + 0x30) << 1)) {
        if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar1 = uVar12;
        if ((int)uVar12 < 0) {
          uVar1 = uVar12 + 1;
        }
        if (in_stack_00000138 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        iVar3 = *(int *)(in_stack_00000138 + 0x18);
        uVar1 = (int)uVar1 >> 1;
        if ((uVar12 & 1) == 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          piVar15 = (int *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          uVar14 = 1;
        }
        else {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          piVar15 = (int *)(lVar9 + (long)(int)uVar1 * 8 + 0x24);
          uVar14 = 2;
        }
        *piVar15 = iVar17 + *(int *)(in_stack_00000130 + 0x18);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar16 = *unaff_x23;
        lVar11 = *(long *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar12 = *(uint *)(lVar10 + 0x18);
        iVar3 = uVar1 + iVar3;
        if (uVar12 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar12 + 1;
          lVar11 = lVar11 + (long)(int)uVar12 * 0x20;
          *(int *)(lVar11 + 0x38) = iVar3;
          *(undefined4 *)(lVar11 + 0x3c) = uVar14;
          *(double *)(lVar11 + 0x30) = dVar13;
          *(undefined8 *)(lVar11 + 0x28) = uVar19;
          *(ulong *)(lVar11 + 0x20) = uVar6;
          thunk_FUN_0333a630(lVar11 + 0x28,0);
        }
        else {
          in_stack_00000198 = CONCAT44(uVar14,iVar3);
          in_stack_00000180 = uVar6;
          in_stack_00000188 = uVar19;
          in_stack_00000190 = dVar13;
          FUN_0439218c(lVar10,&stack0x00000180,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar16 = *unaff_x23;
        lVar11 = *(long *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar12 = *(uint *)(lVar10 + 0x18);
        if (uVar12 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar12 + 1;
          lVar11 = lVar11 + (long)(int)uVar12 * 0x20;
          *(undefined4 *)(lVar11 + 0x38) = uVar14;
          *(undefined4 *)(lVar11 + 0x3c) = uVar2;
          *(double *)(lVar11 + 0x30) = dVar13;
          *(undefined8 *)(lVar11 + 0x28) = uVar19;
          *(ulong *)(lVar11 + 0x20) = uVar6;
          thunk_FUN_0333a630(lVar11 + 0x28,0);
        }
        else {
          in_stack_00000180 = uVar6;
          in_stack_00000188 = uVar19;
          in_stack_00000190 = dVar13;
          in_stack_00000198 = uVar20;
          FUN_0439218c(lVar10,&stack0x00000180,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar7 + 0x18));
  }
  uVar20 = FUN_03986454(in_stack_00000138,lVar9,
                        *(undefined8 *)
                         Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>__ctor__
                       );
  in_stack_00000138 =
       FUN_039a4828(uVar20,*(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Dictionary__
                   );
  puVar5 = Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Value__;
  thunk_FUN_0333a630(in_stack_00000018);
  uVar20 = FUN_039864c4(in_stack_00000130,lVar10,
                        *(undefined8 *)
                         Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                       );
  in_stack_00000130 =
       FUN_039a48b0(uVar20,*(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                   );
  puVar18 = (undefined8 *)Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
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
      uVar20 = FUN_03995ea8(in_stack_00000020,
                            *(undefined8 *)
                             Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_ChangeItemKey__
                           );
      uVar20 = FUN_039a47a0(uVar20,*(undefined8 *)
                                    Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Remove__
                           );
      *(undefined8 *)(in_stack_00000010 + 0x38) = uVar20;
      thunk_FUN_0333a630();
      return;
    }
    uVar6 = FUN_039779b8(in_stack_00000020,*unaff_x25);
    if ((uVar6 & 1) == 0) {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
LAB_06869e68:
      uVar19 = *(undefined8 *)(unaff_x26 + 0x10);
      lVar7 = FUN_032d5d3c(*(undefined8 *)Method_System_Lazy<DebugManager>__ctor__,0);
      thunk_FUN_0333a630(in_stack_00000038);
      lVar9 = FUN_032d5d3c(*(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                           ,0);
      thunk_FUN_0333a630(in_stack_00000030);
      uStack00000000000000c0 = (ulong)*(uint *)(unaff_x26 + 0x24) << 0x20;
      uStack00000000000000c0 =
           CONCAT53(uStack00000000000000c0._3_5_,*(undefined3 *)(unaff_x26 + 0x20));
      uVar12 = *(uint *)(unaff_x26 + 0x34);
      fVar21 = *(float *)(unaff_x26 + 0x38);
      uVar20 = *(undefined8 *)(unaff_x26 + 0x34);
      uStack00000000000000e8 = 0;
      if (*(long *)(unaff_x26 + 0x40) != 0) {
        uStack00000000000000e8 = FUN_0686a758();
        uVar12 = *(uint *)(unaff_x26 + 0x34);
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
      in_stack_00000188 = uVar19;
      in_stack_00000198 = uVar20;
      in_stack_000001a0 = (double)uVar12 * (double)fVar21;
      in_stack_000001b0 = lVar7;
      in_stack_000001b8 = lVar9;
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
      dVar13 = *(double *)(unaff_x26 + 0x10);
      FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar18);
      if (((in_stack_00000190 < dVar13) ||
          (cVar4 = *(char *)(unaff_x26 + 0x20),
          FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar18),
          (cVar4 != '\0') == ((in_stack_00000180 & 1) == 0))) ||
         ((*(char *)(unaff_x26 + 0x20) == '\0' &&
          ((*(char *)(unaff_x26 + 0x21) != '\0' ||
           (FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar18),
           (in_stack_00000180 & 0x10000) != 0)))))) goto LAB_06869e68;
      iVar17 = *(int *)(unaff_x26 + 0x24);
      FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar18);
      if ((iVar17 != in_stack_00000180._4_4_) || (*(int *)(unaff_x26 + 0x34) != 0))
      goto LAB_06869e68;
    }
    FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar18);
    lVar7 = in_stack_000001b0;
    uVar6 = in_stack_00000180;
    in_stack_00000108 = in_stack_00000188;
    in_stack_00000100 = in_stack_00000180;
    in_stack_00000118 = in_stack_00000198;
    in_stack_00000128 = in_stack_000001a8;
    in_stack_00000120 = in_stack_000001a0;
    in_stack_00000138 = in_stack_000001b8;
    in_stack_00000130 = in_stack_000001b0;
    in_stack_00000110 = *(double *)(unaff_x26 + 0x18);
    uVar20 = FUN_0686971c(unaff_x26,in_stack_00000028);
    lVar9 = *(long *)
             Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
    ;
    if ((uVar6 & 1) == 0) break;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar9 = *(long *)
               Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
    }
    lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
    if (lVar10 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar9);
        lVar9 = *(long *)
                 Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
        ;
      }
      uVar19 = **(undefined8 **)(lVar9 + 0xb8);
      lVar10 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<ExtensionMethodCache>__ctor__);
      FUN_055dd3f0(lVar10,uVar19,
                   *(undefined8 *)
                    Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Next__,0);
      plVar8 = (long *)(*(long *)(*(long *)
                                   Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                 + 0xb8) + 0x18);
      *plVar8 = lVar10;
      thunk_FUN_0333a630(plVar8,lVar10);
      puVar18 = (undefined8 *)Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
    }
    uVar20 = FUN_03995b4c(uVar20,lVar10,
                          *(undefined8 *)
                           Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_get_Item__
                         );
    uVar20 = FUN_039864c4(lVar7,uVar20,
                          *(undefined8 *)
                           Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                         );
    in_stack_00000130 =
         FUN_039a48b0(uVar20,*(undefined8 *)
                              Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                     );
    thunk_FUN_0333a630(in_stack_000001c8);
  } while( true );
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar9);
    lVar9 = *(long *)
             Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
    ;
  }
  lVar7 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar9 = *(long *)
               Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
    }
    uVar19 = **(undefined8 **)(lVar9 + 0xb8);
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<ExtensionMethodCache>_get_Value__);
    FUN_055e6d08(lVar7,uVar19,
                 *(undefined8 *)
                  Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Value__,0);
    plVar8 = (long *)(*(long *)(*(long *)
                                 Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                               + 0xb8) + 8);
    *plVar8 = lVar7;
    thunk_FUN_0333a630(plVar8,lVar7);
  }
  unaff_x19 = FUN_0399d870(uVar20,lVar7,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Contains__
                          );
  param_1 = *(long *)
             Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
  ;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(param_1);
    param_1 = *(long *)
               Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
    ;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
  if (lVar7 == 0) goto Unity_VisualScripting_FullSerializer_fsDictionaryConverter___ctor;
  goto LAB_0686a0e0;
Unity_VisualScripting_FullSerializer_fsDictionaryConverter___ctor:
  if (*(int *)(param_1 + 0xe0) == 0) goto code_r0x0686a07c;
  goto LAB_0686a090;
}


