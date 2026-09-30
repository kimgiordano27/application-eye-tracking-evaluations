/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.FindSpawnPositions$$StartSpawn
ENTRY_POINT: 01472eac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_FindSpawnPositions__StartSpawn(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  float fVar6;
  float fVar7;
  float unaff_s10;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 unaff_d15;
  long in_stack_00000008;
  long in_stack_00000028;
  
  do {
    lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (param_1,param_2);
    FUN_02698b6c(0,unaff_s10 * unaff_s13,0,0);
    if (lVar3 == 0) {
LAB_01473078:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0269f894(lVar3,0);
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444();
      DAT_03774e1c = '\x01';
    }
    uVar9 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xc);
    fVar10 = *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0x14);
    fVar6 = (float)FUN_01472c00();
    lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (unaff_x22,0);
    if (lVar3 == 0) goto LAB_01473078;
    fVar8 = (float)uVar9;
    fVar7 = (float)((ulong)uVar9 >> 0x20);
    fVar7 = fVar7 + fVar7 * fVar6 * (float)((ulong)unaff_d15 >> 0x20);
    FUN_0269fd98(CONCAT44(fVar7,fVar8 + fVar8 * fVar6 * (float)unaff_d15),fVar7,
                 fVar10 + fVar10 * fVar6 * unaff_s14,lVar3,0);
    if (unaff_w24 + (int)((unaff_x25 & 0xffffffff) / 3) * 3 == (int)unaff_x27) {
      if (*(uint *)(unaff_x20 + 3) <= unaff_x26) goto LAB_0147307c;
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01473078;
      FUN_00ac8520(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x28 + unaff_x27 * 8),
                   *(undefined8 *)StringLiteral_1415);
    }
    unaff_x27 = unaff_x27 + 1;
    unaff_x25 = (ulong)((int)unaff_x25 + 1);
    if (unaff_x27 == 10) {
      unaff_w24 = unaff_w24 + -10;
      unaff_x29 = unaff_x29 + 10;
      unaff_x28 = unaff_x28 + 0x50;
      in_stack_00000008 = in_stack_00000008 + 1;
      if (in_stack_00000008 == 10) {
        plVar4 = *(long **)(unaff_x19 + 0x28);
        if (plVar4 == (long *)0x0) goto LAB_01473078;
        (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        if (*(long **)(unaff_x19 + 0x28) == (long *)0x0) goto LAB_01473078;
        uVar5 = (**(code **)(**(long **)(unaff_x19 + 0x28) + 0x228))();
        if ((uVar5 & 1) != 0) {
          plVar4 = *(long **)(unaff_x19 + 0x28);
          if (plVar4 == (long *)0x0) goto LAB_01473078;
          (**(code **)(*plVar4 + 0x248))(plVar4,0,*(undefined8 *)(*plVar4 + 0x250));
        }
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          uVar9 = FUN_01325140(*(long *)(unaff_x19 + 0x20),
                               *(undefined8 *)
                                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo
                              );
          *(undefined8 *)(unaff_x19 + 0x30) = uVar9;
          FUN_0147308c();
          FUN_0268ee74();
          return;
        }
        goto LAB_01473078;
      }
      unaff_x27 = 0;
      unaff_s12 = (float)(int)in_stack_00000008 * 3.0;
      unaff_x25 = unaff_x29 & 0xffffffff;
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    param_1 = FUN_0112fd4c(uVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_List<TMP_Character>_Clear__);
    if (param_1 == 0) goto LAB_01473078;
    FUN_010e5b20(param_1,&stack0x00000028,*(undefined8 *)PTR_DAT_033eef88);
    if ((in_stack_00000028 == 0) ||
       (lVar3 = FUN_0268fd4c(in_stack_00000028,0), unaff_x20 == (long *)0x0)) goto LAB_01473078;
    if ((lVar3 != 0) &&
       (lVar2 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
      uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar9,0);
    }
    unaff_x26 = unaff_x29 + unaff_x27;
    if (*(uint *)(unaff_x20 + 3) <= unaff_x26) {
LAB_0147307c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(long *)(unaff_x28 + unaff_x27 * 8) = lVar3;
    fVar6 = (float)FUN_02682ae0(0);
    fVar10 = (float)FUN_02682ae0(0);
    lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (param_1,0);
    if (lVar3 == 0) goto LAB_01473078;
    FUN_0269f618(unaff_s12 + fVar6,0,(float)(int)unaff_x27 * 3.0 + fVar10,lVar3,0);
    iVar1 = FUN_02682b20(0,0x168,0);
    unaff_s10 = (float)iVar1;
    param_2 = 0;
    unaff_x22 = param_1;
  } while( true );
}


