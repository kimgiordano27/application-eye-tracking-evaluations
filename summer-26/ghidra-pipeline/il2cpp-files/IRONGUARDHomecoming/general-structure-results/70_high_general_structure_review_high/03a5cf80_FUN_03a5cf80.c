/*
FUNCTION_NAME: FUN_03a5cf80
ENTRY_POINT: 03a5cf80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03a5cf80(long param_1,ulong param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_04838d37 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7585);
    thunk_FUN_01efb3a4(StringLiteral_7646);
    thunk_FUN_01efb3a4(
                      Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    DAT_04838d37 = 1;
  }
  if (param_1 != 0) {
    if ((param_2 & 1) == 0) {
      lVar8 = FUN_039fda98(param_1,0);
    }
    else {
      uVar7 = FUN_039ff444();
      lVar8 = FUN_03405678(uVar7,*(undefined8 *)
                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                           ,0);
    }
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x10);
      if (*(int *)(*(long *)
                    Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar9 = (long *)FUN_03a5d1f0();
      if (plVar9 != (long *)0x0) {
        iVar5 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
        puVar4 = StringLiteral_7646;
        puVar3 = StringLiteral_7585;
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            plVar10 = (long *)(**(code **)(*plVar9 + 0x2e8))
                                        (plVar9,iVar5,*(undefined8 *)(*plVar9 + 0x2f0));
            if (plVar10 == (long *)0x0) goto LAB_03a5d1dc;
            bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar10);
            }
            lVar11 = plVar10[2];
            if (lVar11 == 0) goto LAB_03a5d1dc;
            if ((*(int *)(lVar11 + 0x10) <= iVar1) &&
               (iVar6 = FUN_0340d4cc(lVar11,0,lVar8,0,*(int *)(lVar11 + 0x10),5,0), iVar6 == 0)) {
              plVar9 = (long *)FUN_03a588f4(plVar10,0);
              if (plVar9 == (long *)0x0) goto LAB_03a5d1dc;
              lVar8 = *plVar9;
              uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar14 == 0) goto LAB_03a5d19c;
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_03a5d184;
            }
            iVar5 = iVar5 + 1;
            iVar6 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
          } while (iVar5 < iVar6);
        }
        uVar7 = thunk_FUN_01efb3a4(StringLiteral_7647);
        uVar7 = FUN_033f1b08(uVar7,0);
        thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
        uVar12 = thunk_FUN_01f117cc();
        FUN_0356663c(uVar12,uVar7,0);
        uVar7 = thunk_FUN_01efb3a4(StringLiteral_7648);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,uVar7);
      }
    }
  }
LAB_03a5d1dc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_03a5d184:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03a5d1b8;
    }
  }
LAB_03a5d19c:
  puVar13 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03a5d1b8:
                    /* WARNING: Could not recover jumptable at 0x03a5d1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar13)(plVar9,param_1,puVar13[1]);
  return;
}


