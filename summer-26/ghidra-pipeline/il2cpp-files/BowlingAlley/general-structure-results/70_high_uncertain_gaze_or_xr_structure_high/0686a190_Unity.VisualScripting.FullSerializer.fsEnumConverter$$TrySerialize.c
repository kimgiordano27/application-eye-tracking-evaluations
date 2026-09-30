/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsEnumConverter$$TrySerialize
ENTRY_POINT: 0686a190
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


void Unity_VisualScripting_FullSerializer_fsEnumConverter__TrySerialize
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  long lVar12;
  int unaff_w19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  undefined4 unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long lVar13;
  long unaff_x27;
  undefined8 *puVar14;
  undefined8 uVar15;
  long unaff_x28;
  long unaff_x29;
  float fVar16;
  double dVar17;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  double in_stack_000000b0;
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
  
code_r0x0686a190:
  lVar7 = FUN_041e29a8(unaff_x28,unaff_w19,param_3);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar9 = *(uint *)(lVar7 + 0x30);
  if ((long)(int)uVar9 < (long)(ulong)(uint)(*(int *)(unaff_x26 + 0x30) << 1)) {
    if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar1 = uVar9;
    if ((int)uVar9 < 0) {
      uVar1 = uVar9 + 1;
    }
    if (in_stack_00000138 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar2 = *(int *)(in_stack_00000138 + 0x18);
    uVar1 = (int)uVar1 >> 1;
    if ((uVar9 & 1) == 0) {
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(unaff_x29 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      piVar11 = (int *)(unaff_x29 + (long)(int)uVar1 * 8 + 0x20);
      uVar10 = 1;
    }
    else {
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(unaff_x29 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      piVar11 = (int *)(unaff_x29 + (long)(int)uVar1 * 8 + 0x24);
      uVar10 = 2;
    }
    *piVar11 = unaff_w19 + *(int *)(in_stack_00000130 + 0x18);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar12 = *unaff_x23;
    lVar7 = *(long *)(unaff_x27 + 0x10);
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar9 = *(uint *)(unaff_x27 + 0x18);
    iVar2 = uVar1 + iVar2;
    if (uVar9 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x27 + 0x18) = uVar9 + 1;
      lVar7 = lVar7 + (long)(int)uVar9 * 0x20;
      *(int *)(lVar7 + 0x38) = iVar2;
      *(undefined4 *)(lVar7 + 0x3c) = uVar10;
      *(double *)(lVar7 + 0x30) = in_stack_000000b0;
      *(undefined8 *)(lVar7 + 0x28) = in_stack_000000a8;
      *(ulong *)(lVar7 + 0x20) = in_stack_000000a0;
      thunk_FUN_0333a630(lVar7 + 0x28,0);
    }
    else {
      in_stack_00000188 = in_stack_000000a8;
      in_stack_00000180 = in_stack_000000a0;
      in_stack_00000190 = in_stack_000000b0;
      in_stack_00000198 = CONCAT44(uVar10,iVar2);
      FUN_0439218c(unaff_x27,&stack0x00000180,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar12 = *unaff_x23;
    lVar7 = *(long *)(unaff_x27 + 0x10);
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar9 = *(uint *)(unaff_x27 + 0x18);
    if (uVar9 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x27 + 0x18) = uVar9 + 1;
      lVar7 = lVar7 + (long)(int)uVar9 * 0x20;
      *(undefined4 *)(lVar7 + 0x38) = unaff_w24;
      *(undefined4 *)(lVar7 + 0x3c) = unaff_w22;
      *(double *)(lVar7 + 0x30) = in_stack_000000b0;
      *(undefined8 *)(lVar7 + 0x28) = in_stack_000000a8;
      *(ulong *)(lVar7 + 0x20) = in_stack_000000a0;
      thunk_FUN_0333a630(lVar7 + 0x28,0);
    }
    else {
      in_stack_00000188 = in_stack_000000a8;
      in_stack_00000180 = in_stack_000000a0;
      in_stack_00000190 = in_stack_000000b0;
      in_stack_00000198 = CONCAT44(unaff_w22,unaff_w24);
      FUN_0439218c(unaff_x27,&stack0x00000180,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
  unaff_w19 = unaff_w19 + 1;
  if (*(int *)(unaff_x28 + 0x18) <= unaff_w19) {
LAB_0686a390:
    uVar8 = FUN_03986454(in_stack_00000138,unaff_x29,
                         *(undefined8 *)
                          Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>__ctor__
                        );
    in_stack_00000138 =
         FUN_039a4828(uVar8,*(undefined8 *)
                             Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Dictionary__
                     );
    puVar4 = Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Value__;
    thunk_FUN_0333a630(in_stack_00000018);
    uVar8 = FUN_039864c4(in_stack_00000130,unaff_x27,
                         *(undefined8 *)
                          Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                        );
    in_stack_00000130 =
         FUN_039a48b0(uVar8,*(undefined8 *)
                             Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                     );
    puVar14 = (undefined8 *)Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__;
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
      FUN_049c52e4(in_stack_00000020,&stack0x00000180,*(undefined8 *)puVar4);
      uVar5 = FUN_052d44b4(&stack0x00000140,*unaff_x25);
      unaff_x26 = in_stack_00000150;
      if ((uVar5 & 1) == 0) {
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
      uVar5 = FUN_039779b8(in_stack_00000020,*unaff_x20);
      if ((uVar5 & 1) == 0) {
        if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
LAB_06869e68:
        uVar15 = *(undefined8 *)(unaff_x26 + 0x10);
        lVar7 = FUN_032d5d3c(*(undefined8 *)Method_System_Lazy<DebugManager>__ctor__,0);
        thunk_FUN_0333a630(in_stack_00000038);
        lVar12 = FUN_032d5d3c(*(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                              ,0);
        thunk_FUN_0333a630(in_stack_00000030);
        uStack00000000000000c0 = (ulong)*(uint *)(unaff_x26 + 0x24) << 0x20;
        uStack00000000000000c0 =
             CONCAT53(uStack00000000000000c0._3_5_,*(undefined3 *)(unaff_x26 + 0x20));
        uVar9 = *(uint *)(unaff_x26 + 0x34);
        fVar16 = *(float *)(unaff_x26 + 0x38);
        uVar8 = *(undefined8 *)(unaff_x26 + 0x34);
        uStack00000000000000e8 = 0;
        if (*(long *)(unaff_x26 + 0x40) != 0) {
          uStack00000000000000e8 = FUN_0686a758();
          uVar9 = *(uint *)(unaff_x26 + 0x34);
          fVar16 = *(float *)(unaff_x26 + 0x38);
        }
        uStack00000000000000e8 = uStack00000000000000e8 & 0xffffffff;
        if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        in_stack_00000180 = uStack00000000000000c0;
        in_stack_00000190 = 0.0;
        in_stack_000001a8 = uStack00000000000000e8;
        in_stack_00000188 = uVar15;
        in_stack_00000198 = uVar8;
        in_stack_000001a0 = (double)uVar9 * (double)fVar16;
        in_stack_000001b0 = lVar7;
        in_stack_000001b8 = lVar12;
        FUN_049c52e4(in_stack_00000020,&stack0x00000180,*(undefined8 *)puVar4);
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
        dVar17 = *(double *)(unaff_x26 + 0x10);
        FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar14);
        if (((in_stack_00000190 < dVar17) ||
            (cVar3 = *(char *)(unaff_x26 + 0x20),
            FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar14),
            (cVar3 != '\0') == ((in_stack_00000180 & 1) == 0))) ||
           ((*(char *)(unaff_x26 + 0x20) == '\0' &&
            ((*(char *)(unaff_x26 + 0x21) != '\0' ||
             (FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar14),
             (in_stack_00000180 & 0x10000) != 0)))))) goto LAB_06869e68;
        iVar2 = *(int *)(unaff_x26 + 0x24);
        FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar14);
        if ((iVar2 != in_stack_00000180._4_4_) || (*(int *)(unaff_x26 + 0x34) != 0))
        goto LAB_06869e68;
      }
      FUN_049c5180(&stack0x00000180,in_stack_00000020,*puVar14);
      lVar7 = in_stack_000001b0;
      uVar5 = in_stack_00000180;
      in_stack_00000108 = in_stack_00000188;
      in_stack_00000100 = in_stack_00000180;
      in_stack_00000118 = in_stack_00000198;
      in_stack_00000128 = in_stack_000001a8;
      in_stack_00000120 = in_stack_000001a0;
      in_stack_00000138 = in_stack_000001b8;
      in_stack_00000130 = in_stack_000001b0;
      in_stack_00000110 = *(double *)(unaff_x26 + 0x18);
      uVar8 = FUN_0686971c(unaff_x26,in_stack_00000028);
      lVar12 = *(long *)
                Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
      if ((uVar5 & 1) == 0) goto code_r0x06869f94;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar12);
        lVar12 = *(long *)
                  Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
        ;
      }
      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
      if (lVar13 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar12);
          lVar12 = *(long *)
                    Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
          ;
        }
        uVar15 = **(undefined8 **)(lVar12 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<ExtensionMethodCache>__ctor__)
        ;
        FUN_055dd3f0(lVar13,uVar15,
                     *(undefined8 *)
                      Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Next__,0);
        plVar6 = (long *)(*(long *)(*(long *)
                                     Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                                   + 0xb8) + 0x18);
        *plVar6 = lVar13;
        thunk_FUN_0333a630(plVar6,lVar13);
        puVar14 = (undefined8 *)Method_System_Collections_Generic_LinkedListNode<Action>_get_Value__
        ;
      }
      uVar8 = FUN_03995b4c(uVar8,lVar13,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_get_Item__
                          );
      uVar8 = FUN_039864c4(lVar7,uVar8,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_ProfiledSegment>_Contains__
                          );
      in_stack_00000130 =
           FUN_039a48b0(uVar8,*(undefined8 *)
                               Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_get_Item__
                       );
      thunk_FUN_0333a630(in_stack_000001c8);
    } while( true );
  }
  goto LAB_0686a164;
code_r0x06869f94:
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar12);
    lVar12 = *(long *)
              Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
    ;
  }
  lVar7 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar12);
      lVar12 = *(long *)
                Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
    }
    uVar15 = **(undefined8 **)(lVar12 + 0xb8);
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<ExtensionMethodCache>_get_Value__);
    FUN_055e6d08(lVar7,uVar15,
                 *(undefined8 *)
                  Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Value__,0);
    plVar6 = (long *)(*(long *)(*(long *)
                                 Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                               + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_0333a630(plVar6,lVar7);
  }
  uVar8 = FUN_0399d870(uVar8,lVar7,
                       *(undefined8 *)
                        Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>_Contains__
                      );
  lVar7 = *(long *)
           Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
  ;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar7);
    lVar7 = *(long *)
             Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
    ;
  }
  lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar7);
      lVar7 = *(long *)
               Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
      ;
    }
    uVar15 = **(undefined8 **)(lVar7 + 0xb8);
    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Lazy<DebugManager>_get_Value__);
    Meta_WitAi_Json_WitResponseArray__get_Count
              (lVar12,uVar15,
               *(undefined8 *)
                Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>__ctor__
               ,0);
    plVar6 = (long *)(*(long *)(*(long *)
                                 Method_System_Collections_Generic_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>_get_Next__
                               + 0xb8) + 0x10);
    *plVar6 = lVar12;
    thunk_FUN_0333a630(plVar6,lVar12);
  }
  uVar8 = FUN_039958c0(uVar8,lVar12,
                       *(undefined8 *)
                        Method_System_Collections_ObjectModel_KeyedCollection<string,_VariableDeclaration>__ctor__
                      );
  unaff_x28 = FUN_039a6ef0(uVar8,*(undefined8 *)
                                  Method_System_Lazy<Dictionary<Type,_MethodInfo[]>>__ctor__);
  unaff_x29 = FUN_032d5d3c(*(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<string,_Namespace>_get_Dictionary__
                           ,*(undefined4 *)(unaff_x26 + 0x30));
  unaff_x27 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Next__
                                );
  FUN_043918b8(unaff_x27,*(undefined8 *)Method_Unity_VisualScripting_Lerp<Vector3>__ctor__);
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (0 < *(int *)(unaff_x28 + 0x18)) goto code_r0x0686a160;
  goto LAB_0686a390;
code_r0x0686a160:
  unaff_w19 = 0;
LAB_0686a164:
  lVar7 = FUN_041e29a8(unaff_x28,unaff_w19,*unaff_x21);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  in_stack_000000b0 = *(double *)(lVar7 + 0x20);
  in_stack_000000a8 = *(undefined8 *)(lVar7 + 0x18);
  in_stack_000000a0 = *(ulong *)(lVar7 + 0x10);
  param_3 = *unaff_x21;
  unaff_w24 = *(undefined4 *)(lVar7 + 0x28);
  unaff_w22 = *(undefined4 *)(lVar7 + 0x2c);
  goto code_r0x0686a190;
}


