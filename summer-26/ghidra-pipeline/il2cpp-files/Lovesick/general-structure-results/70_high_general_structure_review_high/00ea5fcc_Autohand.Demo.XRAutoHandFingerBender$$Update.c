/*
FUNCTION_NAME: Autohand.Demo.XRAutoHandFingerBender$$Update
ENTRY_POINT: 00ea5fcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Autohand_Demo_XRAutoHandFingerBender__Update(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  while (param_1 != 0) {
    uVar3 = FUN_0129eff4(param_1,unaff_x24,&stack0x00000018,*(undefined8 *)PTR_DAT_033f5520);
    if ((uVar3 & 1) == 0) {
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
      if (lVar4 == 0) break;
      FUN_0267d6d8(lVar4,unaff_x24,0);
      in_stack_00000018 = lVar4;
      if (*(long *)(unaff_x19 + 0x40) == 0) break;
      FUN_0129a054(*(long *)(unaff_x19 + 0x40),unaff_x24,lVar4,*(undefined8 *)PTR_DAT_033ea940);
    }
    if (in_stack_00000018 == 0) break;
    FUN_0267f088(in_stack_00000018,
                 *(undefined8 *)Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__
                 ,*(undefined4 *)(unaff_x19 + 0x18),0);
    (**(code **)(*unaff_x23 + 0x348))
              (unaff_x23,in_stack_00000018,*(undefined8 *)(*unaff_x23 + 0x350));
    while( true ) {
      do {
        puVar2 = 
        Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
        ;
        unaff_x29 = unaff_x29 + 1;
        if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x29) {
          if (unaff_x21 == 0) goto LAB_00ea63e4;
          if ((int)*(ulong *)(unaff_x21 + 0x18) < 1) goto LAB_00ea6230;
          uVar3 = 0;
          uVar9 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
          goto LAB_00ea60a0;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_x29) goto LAB_00ea63e8;
        unaff_x23 = *(long **)(unaff_x27 + unaff_x29 * 8);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_0268b4e0(unaff_x23,0,0);
      } while ((uVar3 & 1) != 0);
      if (unaff_x23 == (long *)0x0) goto LAB_00ea63e4;
      unaff_x24 = (**(code **)(*unaff_x23 + 0x358))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x360));
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x26);
      }
      uVar3 = FUN_0268b4e0(unaff_x24,0,0);
      if ((uVar3 & 1) == 0) break;
      uVar5 = FUN_0268b6ac(unaff_x23,0);
      plVar6 = (long *)thunk_FUN_00d93c64(unaff_x23,0);
      if (plVar6 == (long *)0x0) goto LAB_00ea63e4;
      uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      uVar5 = FUN_0160073c(*(undefined8 *)
                            Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
                           ,uVar5,*unaff_x28,uVar7,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02661754(uVar5,0);
    }
    param_1 = *(long *)(unaff_x19 + 0x40);
  }
  goto LAB_00ea63e4;
  while( true ) {
                    /* try { // try from 00ea60ac to 00fa60cb has its CatchHandler @ 00ea60ac
                       catch() { ... } // from try @ 00ea60ac with catch @ 00ea60ac
                       catch() { ... } // from try @ 00ea60d8 with catch @ 00ea60ac */
    lVar4 = *(long *)(unaff_x21 + 0x20 + uVar3 * 8);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b4e0(lVar4,0,0);
                    /* try { // try from 00ea60cc to 00fa60d7 has its CatchHandler @ 00ea60f4 */
    if ((uVar9 & 1) == 0) {
      if (lVar4 == 0) goto LAB_00ea63e4;
                    /* try { // try from 00ea60d8 to 00fa610f has its CatchHandler @ 00ea60ac */
      uVar5 = FUN_024c745c(lVar4,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 00ea60cc with catch @ 00ea60f4 */
        thunk_FUN_00d32864(*unaff_x26);
      }
      uVar9 = FUN_0268b4e0(uVar5,0,0);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
        uVar9 = FUN_0129eff4(*(long *)(unaff_x19 + 0x40),uVar5,&stack0x00000010,
                             *(undefined8 *)PTR_DAT_033f5520);
        if ((uVar9 & 1) == 0) {
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
          if (lVar8 == 0) goto LAB_00ea63e4;
          FUN_0267d6d8(lVar8,uVar5,0);
          in_stack_00000010 = lVar8;
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
          FUN_0129a054(*(long *)(unaff_x19 + 0x40),uVar5,lVar8,*(undefined8 *)PTR_DAT_033ea940);
        }
        if (in_stack_00000010 == 0) goto LAB_00ea63e4;
        FUN_0267f088(in_stack_00000010,
                     *(undefined8 *)
                      Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__,
                     *(undefined4 *)(unaff_x19 + 0x18),0);
        FUN_024c7470(lVar4,in_stack_00000010,0);
      }
      else {
                    /* catch() { ... } // from try @ 00ea6138 with catch @ 00ea6110 */
        uVar5 = FUN_0268b6ac(lVar4,0);
        plVar6 = (long *)thunk_FUN_00d93c64(lVar4,0);
        if (plVar6 == (long *)0x0) goto LAB_00ea63e4;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        uVar5 = FUN_0160073c(*(undefined8 *)puVar2,uVar5,*unaff_x28,uVar7,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar5,0);
      }
    }
    uVar9 = (ulong)*(uint *)(unaff_x21 + 0x18);
    uVar3 = uVar3 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)uVar3) break;
LAB_00ea60a0:
    if (uVar9 <= uVar3) goto LAB_00ea63e8;
  }
LAB_00ea6230:
  puVar1 = Method_Unity_Collections_NativeSlice<Vector3>_set_Item__;
  if (unaff_x20 != 0) {
    if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
      uVar3 = 0;
      uVar9 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar3) {
LAB_00ea63e8:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar4 = *(long *)(unaff_x20 + 0x20 + uVar3 * 8);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_0268b4e0(lVar4,0,0);
        if ((uVar9 & 1) == 0) {
          if (lVar4 == 0) goto LAB_00ea63e4;
          uVar5 = *(undefined8 *)(lVar4 + 0x160);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_0268b4e0(uVar5,0,0);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
            uVar9 = FUN_0129eff4(*(long *)(unaff_x19 + 0x40),uVar5,&stack0x00000008,
                                 *(undefined8 *)PTR_DAT_033f5520);
            if ((uVar9 & 1) == 0) {
              lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
              if (lVar8 == 0) goto LAB_00ea63e4;
              FUN_0267d6d8(lVar8,uVar5,0);
              in_stack_00000008 = lVar8;
              if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
              FUN_0129a054(*(long *)(unaff_x19 + 0x40),uVar5,lVar8,*(undefined8 *)PTR_DAT_033ea940);
            }
            if (in_stack_00000008 == 0) goto LAB_00ea63e4;
            FUN_0267f088(in_stack_00000008,*(undefined8 *)puVar1,8,0);
            *(long *)(lVar4 + 0x160) = in_stack_00000008;
          }
          else {
            uVar5 = FUN_0268b6ac(lVar4,0);
            plVar6 = (long *)thunk_FUN_00d93c64(lVar4,0);
            if (plVar6 == (long *)0x0) goto LAB_00ea63e4;
            uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            uVar5 = FUN_0160073c(*(undefined8 *)puVar2,uVar5,*unaff_x28,uVar7,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02661754(uVar5,0);
          }
        }
        uVar9 = (ulong)*(uint *)(unaff_x20 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x20 + 0x18));
    }
    return;
  }
LAB_00ea63e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


