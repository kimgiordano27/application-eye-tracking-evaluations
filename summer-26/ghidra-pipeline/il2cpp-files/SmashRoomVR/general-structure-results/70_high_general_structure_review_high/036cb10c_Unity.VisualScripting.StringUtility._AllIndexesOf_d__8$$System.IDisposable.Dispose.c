/*
FUNCTION_NAME: Unity.VisualScripting.StringUtility.<AllIndexesOf>d__8$$System.IDisposable.Dispose
ENTRY_POINT: 036cb10c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_IDisposable_Dispose(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint unaff_w19;
  undefined4 unaff_w20;
  int unaff_w21;
  undefined8 unaff_x22;
  undefined4 unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  do {
    thunk_FUN_01ac7298(param_1);
    do {
      uVar2 = FUN_0391f968(unaff_x22,0,0);
      if ((uVar2 & 1) == 0) {

        Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
        :
        uVar4 = FUN_036fb8e4(0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar2 = FUN_0391f968(uVar4,0,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        lVar3 = FUN_036fb8e4(0);
        if (lVar3 != 0) {
          uVar1 = FUN_03922ce0(lVar3,0);
          lVar5 = *unaff_x25;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar5);
            lVar5 = *unaff_x25;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
          if (lVar5 != 0) {
            uVar2 = FUN_028f8a44(lVar5,uVar1,*unaff_x26);
            if ((uVar2 & 1) == 0) {
              return 0;
            }
            uVar2 = FUN_036cbb68(lVar3,unaff_w20,1,unaff_w19 & 1);
            if ((uVar2 & 1) == 0) {
              return 0;
            }
            return 1;
          }
        }
LAB_036cb27c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar3 = FUN_036fba04(0);
      if ((lVar3 == 0) || (lVar3 = FUN_02b59714(lVar3,unaff_w21,*unaff_x27), lVar3 == 0))
      goto LAB_036cb27c;
      uVar1 = FUN_03922ce0(lVar3,0);
      lVar5 = *unaff_x25;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar5);
        lVar5 = *unaff_x25;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
      if (lVar5 == 0) goto LAB_036cb27c;
      uVar2 = FUN_028f8a44(lVar5,uVar1,*unaff_x26);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = FUN_036cbb68(lVar3,unaff_w20,1,unaff_w19 & 1), (uVar2 & 1) != 0)) {
        return unaff_w24;
      }
      unaff_w21 = unaff_w21 + 1;
      lVar3 = FUN_036fba04(0);
      if (lVar3 == 0) goto LAB_036cb27c;
      if (*(int *)(lVar3 + 0x18) <= unaff_w21)
      goto 
      Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
      ;
      lVar3 = FUN_036fba04(0);
      if (lVar3 == 0) goto LAB_036cb27c;
      unaff_x22 = FUN_02b59714(lVar3,unaff_w21,*unaff_x27);
      param_1 = *unaff_x28;
    } while (*(int *)(param_1 + 0xe0) != 0);
  } while( true );
}


