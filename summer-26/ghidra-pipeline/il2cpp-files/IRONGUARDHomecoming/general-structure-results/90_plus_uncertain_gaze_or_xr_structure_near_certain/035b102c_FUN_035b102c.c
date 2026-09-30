/*
FUNCTION_NAME: FUN_035b102c
ENTRY_POINT: 035b102c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 183
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x035b1258) */

long FUN_035b102c(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int in_w8;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *unaff_x25;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = System_Threading_OSSpecificSynchronizationContext__Post();
  uVar3 = FUN_034d3ae4(uVar2,0);
  if ((uVar3 & 1) == 0) goto LAB_035b1208;
  plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                     );
  FUN_034cb2ec(plVar4,uVar2,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    do {
      lVar5 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      if (lVar5 == 0) {
        lVar5 = 0;
        iVar1 = 0xb;
        goto LAB_035b1198;
      }
      lVar5 = FUN_03412ab4(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar1 = FUN_03412f70(lVar5,0x3d,0);
    } while (iVar1 < 9);
    FUN_03410500(lVar5,0,iVar1,0);
    uVar3 = thunk_FUN_0340e318();
  } while ((uVar3 & 1) == 0);
  lVar5 = FUN_0341265c(lVar5,iVar1 + 1,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = FUN_03412bf4(lVar5,0x22,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_03415b44(lVar5,*(undefined8 *)
                              Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_3__
                       ,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_03415b44(lVar5,*(undefined8 *)
                                Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                         ,0);
    if ((uVar3 & 1) == 0) goto LAB_035b1168;
  }
  else {
    FUN_0341265c(lVar5,6,0);
LAB_035b1168:
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = System_Threading_OSSpecificSynchronizationContext__Post();
  }
  iVar9 = 10;
  iVar1 = 10;
  if (plVar4 != (long *)0x0) {
LAB_035b1198:
    iVar9 = iVar1;
    lVar7 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_035b11ec;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_035b11ec:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  if ((iVar9 != 0) && (iVar9 != 0xb)) {
    return lVar5;
  }
LAB_035b1208:
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = System_Threading_OSSpecificSynchronizationContext__Post();
  return lVar5;
}


