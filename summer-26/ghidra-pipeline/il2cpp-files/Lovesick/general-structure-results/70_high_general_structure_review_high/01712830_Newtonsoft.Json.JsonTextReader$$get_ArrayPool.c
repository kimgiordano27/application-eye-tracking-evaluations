/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$get_ArrayPool
ENTRY_POINT: 01712830
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextReader__get_ArrayPool
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  undefined1 unaff_w21;
  int iVar8;
  long unaff_x22;
  uint unaff_w24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint uVar9;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 *in_stack_00000008;
  
  while( true ) {
    uVar3 = FUN_01603ec8(param_1,param_2,param_3);
    FUN_01711fc0();
    lVar4 = FUN_0170f380();
    if ((lVar4 == 0) || (lVar4 = FUN_016045b0(lVar4,0,0), lVar4 == 0)) break;
    uVar5 = FUN_015fe250(lVar4,uVar3,0);
    if ((uVar5 & 1) != 0) {
      *in_stack_00000008 = unaff_w21;
    }
    while( true ) {
      unaff_x27 = unaff_x27 + 1;
      uVar9 = (uint)unaff_x27;
      if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)uVar9) {
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if (lVar4 == 0) {
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
          lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
          *(long *)(unaff_x20 + 0x20) = lVar4;
          if (lVar4 == 0) goto LAB_01712b70;
        }
        puVar1 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
        uVar5 = FUN_015fe250(lVar4,*(undefined8 *)StringLiteral_5740,0);
        if ((uVar5 & 1) != 0) {
          iVar8 = 0;
          do {
            uVar3 = FUN_0170ff8c();
            FUN_01600424(*unaff_x25,uVar3,*unaff_x26,0);
            FUN_01711fc0();
            iVar8 = iVar8 + 1;
          } while (iVar8 != 7);
          uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = FUN_01712f84(uVar3);
          if ((uVar5 & 1) != 0) {
            return;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar4 = FUN_017113a8();
          if ((lVar4 != 0) && (plVar6 = *(long **)(lVar4 + 0x78), plVar6 != (long *)0x0)) {
            uVar9 = 0;
            while( true ) {
              lVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
              if (lVar7 == 0) goto LAB_01712b70;
              iVar8 = uVar9 + 1;
              if (*(int *)(lVar7 + 0x18) < iVar8) {
                return;
              }
              Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar4,iVar8);
              FUN_01711fc0();
              FUN_0170f240(lVar4,iVar8);
              FUN_01711fc0();
              lVar7 = FUN_0170f32c(lVar4);
              if (lVar7 == 0) goto LAB_01712b70;
              if (*(uint *)(lVar7 + 0x18) <= uVar9) break;
              FUN_01711fc0();
              plVar6 = *(long **)(lVar4 + 0x78);
              uVar9 = uVar9 + 1;
              if (plVar6 == (long *)0x0) goto LAB_01712b70;
            }
            goto LAB_01712b94;
          }
          goto LAB_01712b70;
        }
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 == 0) {
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
          lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x58);
          *(long *)(unaff_x20 + 0x18) = lVar4;
          if (lVar4 == 0) goto LAB_01712b70;
        }
        uVar5 = FUN_015fe250(lVar4,*(undefined8 *)Method_System_Array_SetValue__,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar4 = FUN_0171153c();
        if ((lVar4 == 0) || (plVar6 = *(long **)(lVar4 + 0x78), plVar6 == (long *)0x0))
        goto LAB_01712b70;
        iVar8 = 1;
        goto LAB_01712b04;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_01712b94;
      lVar4 = *(long *)(unaff_x29 + unaff_x27 * 8);
      if (lVar4 == 0) goto LAB_01712b70;
      uVar2 = FUN_015fa29c(lVar4,0,0);
      if ((uVar2 & 0xffff) == unaff_w24) break;
      if ((uVar2 & 0xffff) == 0xe000) {
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_01712b94;
        lVar4 = *(long *)(unaff_x29 + unaff_x27 * 8);
        if (lVar4 == 0) goto LAB_01712b70;
        FUN_01603ec8(lVar4,1,0);
        FUN_01712b98();
      }
      else {
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_01712b94;
        FUN_01711fc0();
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if (lVar4 == 0) {
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
          lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
          *(long *)(unaff_x20 + 0x20) = lVar4;
          if (lVar4 == 0) goto LAB_01712b70;
        }
        uVar5 = FUN_015fe250(lVar4,*unaff_x28,0);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_01712b94;
          FUN_015f5b28(*(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__,
                       *(undefined8 *)(unaff_x29 + unaff_x27 * 8),0);
          FUN_01711fc0();
        }
      }
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar9) {
LAB_01712b94:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    param_1 = *(long *)(unaff_x29 + unaff_x27 * 8);
    if (param_1 == 0) break;
    param_2 = 1;
    param_3 = 0;
  }
  goto LAB_01712b70;
  while( true ) {
    if (*(int *)(lVar7 + 0x18) < iVar8) {
      return;
    }
    lVar7 = Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar4,iVar8);
    if (lVar7 == 0) break;
    if (0 < *(int *)(lVar7 + 0x10)) {
      Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar4,iVar8);
      FUN_01711fc0();
    }
    plVar6 = *(long **)(lVar4 + 0x78);
    iVar8 = iVar8 + 1;
    if (plVar6 == (long *)0x0) break;
LAB_01712b04:
    lVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (lVar7 == 0) break;
  }
LAB_01712b70:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


