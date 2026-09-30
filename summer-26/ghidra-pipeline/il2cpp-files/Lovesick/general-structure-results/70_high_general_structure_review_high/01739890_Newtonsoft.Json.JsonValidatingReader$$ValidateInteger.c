/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateInteger
ENTRY_POINT: 01739890
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01739918) */

undefined8 Newtonsoft_Json_JsonValidatingReader__ValidateInteger(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    FUN_0160c430();
    FUN_0160c430();
    if (unaff_x24[8] == 0) {
      in_stack_00000010 = unaff_x24[3];
      thunk_FUN_00d61fa0(*unaff_x28,&stack0x00000010);
      in_stack_00000008._4_4_ =
           (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      thunk_FUN_00d61fa0(*unaff_x29,(long)&stack0x00000008 + 4);
      goto LAB_01739b64;
    }
    FUN_0160c430();
    while( true ) {
      unaff_w23 = unaff_w23 + 1;
      iVar3 = (**(code **)(*unaff_x22 + 0x178))();
      if (iVar3 <= unaff_w23) {
        return 1;
      }
      unaff_x24 = (long *)(**(code **)(*unaff_x22 + 0x188))();
      if (unaff_x24 == (long *)0x0) goto LAB_01739bc4;
      uVar4 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
      uVar5 = FUN_016ac04c(uVar4,0,0);
      if ((uVar5 & 1) != 0) break;
      (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
      FUN_01739bc8();
      if (in_stack_00000028._4_1_ == '\0') {
        iVar3 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
        if (iVar3 == -1) {
          in_stack_00000010 = unaff_x24[3];
          thunk_FUN_00d61fa0(*unaff_x28,&stack0x00000010);
          in_stack_00000008._4_4_ =
               (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          thunk_FUN_00d61fa0(*unaff_x29,(long)&stack0x00000008 + 4);
          if (unaff_x21 == 0) goto LAB_01739bc4;
          FUN_0160dca4();
          if ((int)unaff_x24[4] != 0xffffff) {
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x24[4]);
            thunk_FUN_00d61fa0(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__,
                               &stack0x00000010);
            goto LAB_01739a18;
          }
        }
        else {
          uVar2 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
          thunk_FUN_00d61fa0(*unaff_x29,&stack0x00000010);
          if (unaff_x21 == 0) goto LAB_01739bc4;
LAB_01739a18:
          FUN_0160d178();
        }
        lVar6 = FUN_01738dc8(unaff_x24);
        if (lVar6 == 0) goto LAB_01739bc4;
        sVar1 = FUN_015fa29c(lVar6,0,0);
        if (sVar1 == 0x3c) {
          plVar7 = (long *)(**(code **)(*unaff_x24 + 0x1a8))
                                     (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
          if (plVar7 == (long *)0x0) goto LAB_01739bc4;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
          if (plVar7 == (long *)0x0) goto LAB_01739bc4;
          auVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
          _in_stack_00000018 = auVar8;
          uVar4 = thunk_FUN_0176b234(&stack0x00000018,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                                     ,0);
          lVar6 = FUN_01739650();
          iVar3 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
          if ((lVar6 == 0) || (iVar3 != -1)) {
            FUN_015f6780(*(undefined8 *)
                          Sirenix_Serialization_MultiDimensionalArrayFormatter<TArray,_TElement>_var
                         ,uVar4,0);
          }
          else {
            FUN_01600b5c(*(undefined8 *)StringLiteral_3271,uVar4,lVar6,0);
          }
        }
        uVar2 = (**(code **)(*unaff_x24 + 0x178))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180));
        in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
        thunk_FUN_00d61fa0(*unaff_x29,&stack0x00000010);
LAB_01739b64:
        FUN_0160dca4();
      }
    }
    FUN_017b7e58(0);
  } while (unaff_x21 != 0);
LAB_01739bc4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


