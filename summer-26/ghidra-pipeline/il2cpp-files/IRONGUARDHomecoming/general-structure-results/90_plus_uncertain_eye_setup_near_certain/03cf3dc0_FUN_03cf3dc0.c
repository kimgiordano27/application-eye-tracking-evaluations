/*
FUNCTION_NAME: FUN_03cf3dc0
ENTRY_POINT: 03cf3dc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 135
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03cf42ac) */

int FUN_03cf3dc0(long param_1,long *param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  if ((DAT_04839ea5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime_System_IConvertible_ToDecimal__);
    thunk_FUN_01efb3a4(Method_System_DateTime_System_IConvertible_ToInt32__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Range__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Sum__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Mono_Security_Cryptography_DSAManaged_VerifySignature__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_045728c0);
    thunk_FUN_01efb3a4(PTR_DAT_045727d8);
    thunk_FUN_01efb3a4(Method_UI_DamageTextsController_<Start>b__15_0__);
    thunk_FUN_01efb3a4(Method_System_DateTimeParse_ParseExact__);
    DAT_04839ea5 = 1;
  }
  puVar1 = PTR_DAT_045727d8;
  if (param_2 != (long *)0x0) {
    uVar7 = (**(code **)(*param_2 + 0x6d8))(param_2,0x34,*(undefined8 *)(*param_2 + 0x6e0));
    lVar12 = *(long *)puVar1;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar12);
      lVar12 = *(long *)puVar1;
    }
    puVar2 = Method_System_DateTime_System_IConvertible_ToDecimal__;
    lVar15 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x38);
    if (lVar15 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar12);
        lVar12 = *(long *)puVar1;
      }
      uVar16 = **(undefined8 **)(lVar12 + 0xb8);
      lVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_System_DateTime_System_IConvertible_ToInt32__);
      FUN_02e6c3f4(lVar15,uVar16,*(undefined8 *)PTR_DAT_045728c0,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      *plVar8 = lVar15;
      thunk_FUN_01f51358(plVar8,lVar15);
    }
    plVar8 = (long *)FUN_022fbdd0(uVar7,lVar15,*(undefined8 *)puVar2);
    if (plVar8 != (long *)0x0) {
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)Method_System_Linq_Enumerable_Range__) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03cf3fbc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_System_Linq_Enumerable_Range__,0);
LAB_03cf3fbc:
      puVar5 = Method_System_Linq_Enumerable_Sum__;
      puVar4 = Method_UI_DamageTextsController_<Start>b__15_0__;
      puVar3 = Method_Mono_Security_Cryptography_DSAManaged_VerifySignature__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03cf3ff8:
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_03cf3ffc:
        do {
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03cf4048;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03cf4048:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) {
            if (plVar8 == (long *)0x0) {
              return param_4;
            }
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 == 0) goto LAB_03cf4248;
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_03cf4230;
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03cf40a4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_03cf40a4:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          uVar7 = *(undefined8 *)puVar3;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_03579868(uVar7,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar7,uVar7);
          }
          lVar12 = (**(code **)(*plVar10 + 0x208))
                             (plVar10,uVar7,0,*(undefined8 *)(*plVar10 + 0x210));
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(lVar12 + 0x18) != 0) {
            param_4 = param_4 + 1;
            goto LAB_03cf3ffc;
          }
          plVar11 = (long *)(**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260))
          ;
          uVar7 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_03579868(uVar7,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar7,uVar7);
          }
          auVar17 = (**(code **)(*plVar11 + 0x298))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x2a0))
          ;
          if ((auVar17._0_8_ & 1) != 0) {
            lVar12 = param_3;
            if (param_3 == 0) {
              lVar12 = **(long **)(*(long *)
                                    Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                  + 0xb8);
            }
            if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c(auVar17._0_8_,auVar17._8_8_,lVar12);
            }
            FUN_03cf4e40(param_1,plVar10,lVar12,param_4);
            goto LAB_03cf3ff8;
          }
          uVar13 = FUN_035841e4(plVar11,0);
        } while (((uVar13 & 1) != 0) ||
                (auVar17 = FUN_035846d4(plVar11,0), (auVar17._0_8_ & 1) == 0));
        lVar12 = param_3;
        if (param_3 == 0) {
          uVar7 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          auVar17 = FUN_03405678(uVar7,*(undefined8 *)Method_System_DateTimeParse_ParseExact__,0);
          lVar12 = auVar17._0_8_;
        }
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(auVar17._0_8_,auVar17._8_8_,lVar12);
        }
        iVar6 = FUN_03cf3dc0(param_1,plVar11,lVar12,param_4);
        param_4 = iVar6 + param_4;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03cf4230:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03cf4264;
    }
  }
LAB_03cf4248:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03cf4264:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return param_4;
}


