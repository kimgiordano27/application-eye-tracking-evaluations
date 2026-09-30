/*
FUNCTION_NAME: FUN_0102836c
ENTRY_POINT: 0102836c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_0102836c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  float local_64;
  int local_58;
  float local_54;
  
                    /* try { // try from 01028378 to 0112843b has its CatchHandler @ 01028378
                       catch() { ... } // from try @ 01028378 with catch @ 01028378
                       catch() { ... } // from try @ 0102846c with catch @ 01028378
                       catch() { ... } // from try @ 010284dc with catch @ 01028378
                       catch() { ... } // from try @ 0102850c with catch @ 01028378 */
  if ((DAT_03775ed3 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12098);
    thunk_FUN_00d48444(StringLiteral_14143);
    DAT_03775ed3 = 1;
  }
  puVar6 = StringLiteral_12098;
  puVar2 = OVREyeGaze_TypeInfo;
  if (4 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar13 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar13 == 0) goto LAB_010288d8;
    *(undefined1 *)(lVar13 + 0x48) = 0;
    if (*(long *)(lVar13 + 0xb0) == 0) goto LAB_010288d8;
    lVar11 = *(long *)(lVar13 + 0x80);
    uVar8 = *(undefined8 *)(lVar13 + 0xa8);
    FUN_0132138c(*(long *)(lVar13 + 0xb0),*(undefined4 *)(lVar13 + 0x34),&local_54,
                 *(undefined8 *)puVar2);
    if (lVar11 == 0) goto LAB_010288d8;
    FUN_026540a0(local_54,lVar11,uVar8,0);
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar1 = 0;
    break;
  default:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) goto LAB_010288d8;
    FUN_02654548(*(long *)(lVar13 + 0x80),*(undefined8 *)(lVar13 + 0xa0),0);
    goto LAB_0102844c;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x28) = iVar1;
    if (lVar13 == 0) goto LAB_010288d8;
  }
  local_58 = iVar1;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  if (*(int *)(lVar13 + 0x18) + *(int *)(lVar13 + 0x1c) * *(int *)(lVar13 + 0x34) <= local_58) {
    *(undefined1 *)(lVar13 + 0x48) = 1;
    *(undefined4 *)(lVar13 + 0x28) = *(undefined4 *)(lVar13 + 0x24);
    return 0;
  }
  uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                             ,&local_58);
  puVar7 = StringLiteral_14143;
  puVar5 = StringLiteral_302;
  puVar4 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
  if (*(long *)(lVar13 + 0x38) != 0) {
    FUN_0132138c(*(long *)(lVar13 + 0x38),*(undefined4 *)(param_1 + 0x28),&local_54,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                );
    local_64 = local_54;
    uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_64);
    uVar8 = FUN_01600b5c(*(undefined8 *)puVar7,uVar8,uVar9,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    FUN_02660dac(uVar8,0);
    puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
    if (*(long *)(lVar13 + 0x38) != 0) {
      FUN_0132138c(*(long *)(lVar13 + 0x38),*(undefined4 *)(param_1 + 0x28),&local_54,
                   *(undefined8 *)puVar4);
      if (local_54 == 0.0) {
        if (*(long *)(lVar13 + 0x68) != 0) {
          uVar10 = FUN_00fb7f54(*(long *)(lVar13 + 0x68),0);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03774e19 == '\0') {
              thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__
                                );
              DAT_03774e19 = '\x01';
            }
            lVar11 = *(long *)puVar3;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar11 = *(long *)puVar3;
            }
            if (((**(long **)(lVar11 + 0xb8) == 0) || (*(long *)(lVar13 + 200) == 0)) ||
               (lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0xd8), lVar11 == 0))
            goto LAB_010288d8;
            FUN_00fbcd7c(lVar11,*(undefined8 *)(*(long *)(lVar13 + 200) + 0x18),
                         *(undefined8 *)(lVar13 + 0xd0),0);
          }
          if (*(long *)(lVar13 + 0x80) != 0) {
            FUN_02654548(*(long *)(lVar13 + 0x80),*(undefined8 *)(lVar13 + 0x90),0);
            if (*(long *)(lVar13 + 0xb0) != 0) {
              FUN_0132138c(*(long *)(lVar13 + 0xb0),*(undefined4 *)(lVar13 + 0x34),&local_54,
                           *(undefined8 *)puVar2);
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
              if (lVar13 != 0) {
                FUN_0268a094(0.5 / local_54,lVar13,0);
                uVar12 = 2;
                *(long *)(param_1 + 0x18) = lVar13;
                goto LAB_01028494;
              }
            }
          }
        }
      }
      else if (local_54 == 1.4013e-45) {
        if (*(long *)(lVar13 + 0x60) != 0) {
          uVar10 = FUN_00fb7f54(*(long *)(lVar13 + 0x60),0);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03774e19 == '\0') {
              thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__
                                );
              DAT_03774e19 = '\x01';
            }
            lVar11 = *(long *)puVar3;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar11 = *(long *)puVar3;
            }
            if (((**(long **)(lVar11 + 0xb8) == 0) || (*(long *)(lVar13 + 0xb8) == 0)) ||
               (lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0xd8), lVar11 == 0))
            goto LAB_010288d8;
            FUN_00fbcd7c(lVar11,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),
                         *(undefined8 *)(lVar13 + 0xc0),0);
          }
          if (*(long *)(lVar13 + 0x80) != 0) {
            FUN_02654548(*(long *)(lVar13 + 0x80),*(undefined8 *)(lVar13 + 0x88),0);
            if (*(long *)(lVar13 + 0xb0) != 0) {
              FUN_0132138c(*(long *)(lVar13 + 0xb0),*(undefined4 *)(lVar13 + 0x34),&local_54,
                           *(undefined8 *)puVar2);
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
              if (lVar13 != 0) {
                FUN_0268a094(0.5 / local_54,lVar13,0);
                *(long *)(param_1 + 0x18) = lVar13;
                *(undefined4 *)(param_1 + 0x10) = 1;
                return 1;
              }
            }
          }
        }
      }
      else if (local_54 == 2.8026e-45) {
        if (*(long *)(lVar13 + 0x70) != 0) {
          uVar10 = FUN_00fb7f54(*(long *)(lVar13 + 0x70),0);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03774e19 == '\0') {
              thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__
                                );
              DAT_03774e19 = '\x01';
            }
            lVar11 = *(long *)puVar3;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar11 = *(long *)puVar3;
            }
            if (((**(long **)(lVar11 + 0xb8) == 0) || (*(long *)(lVar13 + 0xd8) == 0)) ||
               (lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0xd8), lVar11 == 0))
            goto LAB_010288d8;
            FUN_00fbcd7c(lVar11,*(undefined8 *)(*(long *)(lVar13 + 0xd8) + 0x18),
                         *(undefined8 *)(lVar13 + 0xe0),0);
          }
          if (*(long *)(lVar13 + 0x80) != 0) {
            FUN_02654548(*(long *)(lVar13 + 0x80),*(undefined8 *)(lVar13 + 0x98),0);
            if (*(long *)(lVar13 + 0xb0) != 0) {
              FUN_0132138c(*(long *)(lVar13 + 0xb0),*(undefined4 *)(lVar13 + 0x34),&local_54,
                           *(undefined8 *)puVar2);
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
              if (lVar13 != 0) {
                FUN_0268a094(0.5 / local_54,lVar13,0);
                *(long *)(param_1 + 0x18) = lVar13;
                uVar12 = 3;
                goto LAB_01028494;
              }
            }
          }
        }
      }
      else {
LAB_0102844c:
        if (*(long *)(lVar13 + 0xb0) != 0) {
          FUN_0132138c(*(long *)(lVar13 + 0xb0),*(undefined4 *)(lVar13 + 0x34),&local_54,
                       *(undefined8 *)puVar2);
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
          if (lVar13 != 0) {
            FUN_0268a094(DAT_028aa288 / local_54,lVar13,0);
            *(long *)(param_1 + 0x18) = lVar13;
            uVar12 = 4;
LAB_01028494:
            *(undefined4 *)(param_1 + 0x10) = uVar12;
            return 1;
          }
        }
      }
    }
  }
LAB_010288d8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


