/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<KeyValuePair<object,-Pose>>
ENTRY_POINT: 01c9bcfc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


long System_Array__InternalArray__Insert<KeyValuePair<object,_Pose>>(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x20 + 0x8e1) = 1;
  }
  lVar5 = FUN_01b47fd0(*unaff_x21,1);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_01c9c028:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined2 *)(lVar5 + 0x20) = 0x2f;
    if ((unaff_x19 != 0) &&
       (lVar5 = FUN_02ee8ff4(), puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__,
       puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__,
       puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, lVar5 != 0))
    {
      if (*(int *)(lVar5 + 0x18) < 1) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        uVar13 = 0;
        lVar1 = lVar5 + 0x20;
        do {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_03922f24(lVar11,0,0);
          if ((uVar6 & 1) == 0) {
            if (lVar11 == 0) goto LAB_01c9c024;
            lVar8 = FUN_0391fab4(lVar11,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_01c9c028;
            if (lVar8 == 0) goto LAB_01c9c024;
            lVar8 = FUN_0392a75c(lVar8,*(undefined8 *)(lVar1 + uVar13 * 8),0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            uVar6 = FUN_0391f968(lVar8,0,0);
            lVar7 = 0;
            if ((uVar6 & 1) != 0) {
              if (lVar8 == 0) goto LAB_01c9c024;
              lVar7 = FUN_0391c2b8(lVar8,0);
            }
          }
          else {
            if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_01c9c028;
            lVar7 = FUN_03920070(*(undefined8 *)(lVar1 + uVar13 * 8),0);
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_03922f24(lVar7,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_01c9c028;
            uVar12 = *(undefined8 *)(lVar1 + uVar13 * 8);
            lVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__)
            ;
            FUN_0391fe00(lVar7,uVar12,0);
            if (lVar7 == 0) goto LAB_01c9c024;
            lVar8 = FUN_0391fab4(lVar7,0);
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(puVar4);
              DAT_03fed257 = '\x01';
            }
            if (lVar8 == 0) goto LAB_01c9c024;
            puVar9 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
            FUN_039282dc(*puVar9,puVar9[1],puVar9[2],lVar8,0);
            lVar8 = FUN_0391fab4(lVar7,0);
            if (DAT_03fed256 == '\0') {
              thunk_FUN_01ad9084(puVar3);
              DAT_03fed256 = '\x01';
            }
            if (lVar8 == 0) goto LAB_01c9c024;
            puVar9 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
            FUN_03929060(*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar8,0);
            lVar8 = FUN_0391fab4(lVar7,0);
            if (DAT_03fed258 == '\0') {
              thunk_FUN_01ad9084(puVar4);
              DAT_03fed258 = '\x01';
            }
            if (lVar8 == 0) goto LAB_01c9c024;
            lVar10 = *(long *)(*(long *)puVar4 + 0xb8);
            FUN_039293f4(*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
                         *(undefined4 *)(lVar10 + 0x14),lVar8,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar6 = FUN_0391f968(lVar11,0,0);
            if ((uVar6 & 1) != 0) {
              lVar8 = FUN_0391fab4(lVar7,0);
              if ((lVar11 == 0) || (uVar12 = FUN_0391fab4(lVar11,0), lVar8 == 0)) goto LAB_01c9c024;
              FUN_03929660(lVar8,uVar12,0,0);
            }
          }
          lVar11 = lVar7;
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)*(int *)(lVar5 + 0x18));
      }
      return lVar11;
    }
  }
LAB_01c9c024:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


