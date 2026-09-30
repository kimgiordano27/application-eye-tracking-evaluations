/*
FUNCTION_NAME: FUN_0168a188
ENTRY_POINT: 0168a188
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_0168a188(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,undefined4 param_8,long param_9,long param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 local_7c [4];
  long local_78 [2];
  undefined4 local_64;
  
  if ((DAT_037784ca & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    DAT_037784ca = 1;
  }
  local_64 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_7c[0] = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  FUN_017b46ec(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(long *)(param_1 + 0x38) = param_3;
  *(long *)(param_1 + 0x20) = param_4;
  *(long *)(param_1 + 0x28) = param_5;
  *(long *)(param_1 + 0x50) = param_7;
  *(undefined4 *)(param_1 + 0x58) = param_8;
  *(long *)(param_1 + 0x60) = param_9;
  if (param_9 == 0) {
    uVar2 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar2 = FUN_00da4fb8(uVar2,1);
    FUN_00ac2be8();
    FUN_00acb0b4(uVar2,param_2);
    FUN_00adb25c(uVar2,0,param_2);
    uVar6 = thunk_FUN_00d48444(PTR_DAT_033ef708);
    uVar2 = FUN_017b63dc(uVar6,uVar2,0);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar6,uVar2,0);
    uVar2 = thunk_FUN_00d48444(System_Linq_Expressions_FullConditionalExpressionWithType_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar2);
  }
  if (param_7 != 0) {
    uVar2 = FUN_01686ee0(param_7,param_9,param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    if (param_3 != 0) {
      uVar2 = FUN_00da4fb8(*(undefined8 *)
                            Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,
                           *(undefined4 *)(param_3 + 0x18));
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      if (0 < *(int *)(param_3 + 0x18)) {
        if (param_4 == 0) goto LAB_0168a3b8;
        uVar7 = 0;
        do {
          if (*(uint *)(param_4 + 0x18) <= uVar7) {
LAB_0168a3bc:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (param_5 == 0) goto LAB_0168a3b8;
          if (*(uint *)(param_5 + 0x18) <= uVar7) goto LAB_0168a3bc;
          if (param_6 == 0) goto LAB_0168a3b8;
          if (*(uint *)(param_6 + 0x18) <= uVar7) goto LAB_0168a3bc;
          if (param_10 == 0) goto LAB_0168a3b8;
          uVar1 = *(undefined4 *)(param_4 + 0x20 + uVar7 * 4);
          uVar2 = *(undefined8 *)(param_5 + 0x20 + uVar7 * 8);
          plVar3 = (long *)FUN_01699c4c(param_10,*(undefined4 *)(param_6 + 0x20 + uVar7 * 4),0);
          if (plVar3 != (long *)0x0) {
            if (*plVar3 != *(long *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar3);
            }
          }
          FUN_0168699c(uVar1,uVar2,param_7,plVar3,&local_64,local_78 + 1,local_78,local_7c);
          lVar5 = local_78[0];
          plVar3 = *(long **)(param_1 + 0x30);
          if (plVar3 == (long *)0x0) goto LAB_0168a3b8;
          if ((local_78[0] != 0) &&
             (lVar4 = thunk_FUN_00d6225c(local_78[0],*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          {
            uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar2,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar7) goto LAB_0168a3bc;
          plVar3[uVar7 + 4] = lVar5;
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)*(int *)(param_3 + 0x18));
      }
      lVar5 = FUN_0168a468(param_7,*(undefined8 *)(param_1 + 0x18),param_3,0);
      *(long *)(param_1 + 0x40) = lVar5;
      if (lVar5 != 0) {
        if (*(char *)(lVar5 + 0x2c) == '\0') {
          FUN_01689cb8(lVar5,param_3,*(undefined8 *)(lVar5 + 0x18));
        }
        return;
      }
    }
  }
LAB_0168a3b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


