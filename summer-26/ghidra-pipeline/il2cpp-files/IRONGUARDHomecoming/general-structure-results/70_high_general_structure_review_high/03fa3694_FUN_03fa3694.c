/*
FUNCTION_NAME: FUN_03fa3694
ENTRY_POINT: 03fa3694
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2
*/


long * FUN_03fa3694(long *param_1,long *param_2,undefined1 (*param_3) [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long *local_70;
  long *local_68;
  
  if ((DAT_0483b793 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04581d70);
    thunk_FUN_01efb3a4(PTR_DAT_04581d78);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDouble__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04582740);
    thunk_FUN_01efb3a4(PTR_DAT_04582748);
    thunk_FUN_01efb3a4(PTR_DAT_04582750);
    thunk_FUN_01efb3a4(PTR_DAT_04582758);
    thunk_FUN_01efb3a4(PTR_DAT_04582760);
    thunk_FUN_01efb3a4(PTR_DAT_04582768);
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_ReceiveCommandResponseCallback__);
    thunk_FUN_01efb3a4(PTR_DAT_04582770);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04582778);
    thunk_FUN_01efb3a4(PTR_DAT_04582780);
    thunk_FUN_01efb3a4(PTR_DAT_04582788);
    thunk_FUN_01efb3a4(PTR_DAT_04582790);
    thunk_FUN_01efb3a4(PTR_DAT_04582798);
    thunk_FUN_01efb3a4(PTR_DAT_045827a0);
    thunk_FUN_01efb3a4(PTR_DAT_045827a8);
    thunk_FUN_01efb3a4(PTR_DAT_045827b0);
    thunk_FUN_01efb3a4(PTR_DAT_045827b8);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__);
    thunk_FUN_01efb3a4(PTR_DAT_045827c0);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDateTime__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__);
    thunk_FUN_01efb3a4(PTR_DAT_045827c8);
    thunk_FUN_01efb3a4(PTR_DAT_045827d0);
    thunk_FUN_01efb3a4(PTR_DAT_045827d8);
    thunk_FUN_01efb3a4(PTR_DAT_045827e0);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__)
    ;
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    thunk_FUN_01efb3a4(PTR_DAT_04581568);
    DAT_0483b793 = 1;
  }
  puVar3 = PTR_DAT_04581568;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*param_1 == 0) goto LAB_03fa47ac;
  lVar5 = FUN_03f8c2dc(*param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  puVar2 = PTR_DAT_04581d78;
  if ((lVar5 == 0) ||
     (lVar6 = FUN_02b6b264(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),
                           *(undefined8 *)PTR_DAT_04581d78), lVar6 == 0)) goto LAB_03fa47ac;
  uVar7 = FUN_03f8b204(lVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar3;
    }
    param_1 = (long *)*param_1;
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
    uVar11 = *(undefined8 *)PTR_DAT_04582788;
    if (param_1 == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    }
    uVar10 = *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__;
LAB_03fa3ee0:
    uVar8 = FUN_0340eee0(uVar8,uVar11,uVar14,uVar10,0);
    if (*(int *)(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__);
    }
    FUN_03f9e078(param_3,uVar8,0);
  }
  else {
    uVar8 = FUN_03f8b518(lVar6,0);
    puVar1 = Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    }
    uVar7 = FUN_03f6d010(uVar8,&local_68,0);
    if ((uVar7 & 1) == 0) {
      lVar9 = *param_1;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03fa4b44(lVar9);
      if ((uVar7 & 1) == 0) {
        uVar11 = *(undefined8 *)*param_3;
        uVar14 = *(undefined8 *)(*param_3 + 8);
        uVar8 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_04582758,uVar8,
                             *(undefined8 *)Method_System_DBNull_System_IConvertible_ToDateTime__,0)
        ;
        if (*(int *)(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__);
        }
        auVar16 = FUN_03f8d0c8(uVar8,0);
        auVar16 = FUN_03f8a724(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
        *param_3 = auVar16;
        thunk_FUN_01f51358(*param_3 + 8,0);
        return param_2;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) goto LAB_03fa47ac;
      uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
      uVar11 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      puVar1 = Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__;
      uVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                                 );
      FUN_03f8abf0(uVar14,uVar11,0);
      puVar2 = Method_System_DBNull_System_IConvertible_ToDouble__;
      FUN_02b6b2d0(lVar5,uVar10,uVar14,
                   *(undefined8 *)Method_System_DBNull_System_IConvertible_ToDouble__);
      FUN_02b6b2d0(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)puVar2);
      uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_03f8abf0(uVar11,uVar10,0);
      FUN_02b6b2d0(lVar5,uVar14,uVar11,*(undefined8 *)puVar2);
      uVar11 = *(undefined8 *)*param_3;
      uVar14 = *(undefined8 *)(*param_3 + 8);
      lVar5 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,7);
      if (lVar5 == 0) goto LAB_03fa47ac;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_045827a0;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20));
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_04582798;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x38) = uVar8;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_04582770;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x40));
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x48));
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_04582780;
      thunk_FUN_01f51358();
      uVar8 = FUN_0340efe8(lVar5,0);
      if (*(int *)(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__);
      }
      auVar16 = FUN_03f8d0c8(uVar8,0);
      auVar16 = FUN_03f8a724(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
      *param_3 = auVar16;
    }
    else {
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar3;
      }
      uVar7 = thunk_FUN_0340e318(uVar8,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68),0);
      if ((uVar7 & 1) == 0) {
LAB_03fa4044:
        if (param_2 == (long *)0x0) goto LAB_03fa47ac;
      }
      else {
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *(long *)puVar3;
        }
        puVar4 = PTR_DAT_04581d70;
        uVar7 = FUN_02b6b4d8(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),
                             *(undefined8 *)PTR_DAT_04581d70);
        if ((uVar7 & 1) == 0) {
LAB_03fa3fa4:
          uVar11 = *(undefined8 *)*param_3;
          uVar14 = *(undefined8 *)(*param_3 + 8);
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar9 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68);
          uVar12 = *(undefined8 *)PTR_DAT_045827c8;
          uVar15 = *(undefined8 *)PTR_DAT_045827a8;
LAB_03fa3fe4:
          uVar10 = FUN_0340ebc0(uVar12,uVar10,uVar15,0);
          if (*(int *)(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__);
          }
          auVar16 = FUN_03f8d0c8(uVar10,0);
          auVar16 = FUN_03f8a724(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
          *param_3 = auVar16;
          thunk_FUN_01f51358(*param_3 + 8,0);
          goto LAB_03fa4044;
        }
        lVar9 = *param_1;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_03fa4b44(lVar9);
        if ((uVar7 & 1) == 0) goto LAB_03fa3fa4;
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *(long *)puVar3;
        }
        lVar9 = FUN_02b6b264(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),
                             *(undefined8 *)puVar2);
        if (lVar9 == 0) goto LAB_03fa47ac;
        uVar10 = FUN_03f8b518(lVar9,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar7 = FUN_03f6d010(uVar10,&local_70,0);
        if ((uVar7 & 1) == 0) {
          uVar11 = *(undefined8 *)*param_3;
          uVar14 = *(undefined8 *)(*param_3 + 8);
          uVar12 = *(undefined8 *)PTR_DAT_045827a0;
          uVar15 = *(undefined8 *)PTR_DAT_04582790;
          goto LAB_03fa3fe4;
        }
        if (param_2 == (long *)0x0) goto LAB_03fa47ac;
        uVar7 = (**(code **)(*param_2 + 0x2a8))(param_2,local_70,*(undefined8 *)(*param_2 + 0x2b0));
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar6 = *(long *)puVar3;
          }
          uVar7 = FUN_02b6b4d8(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50),
                               *(undefined8 *)puVar4);
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar6);
            lVar6 = *(long *)puVar3;
          }
          if ((uVar7 & 1) == 0) {
            uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
            uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                                      );
            FUN_03f8abf0(uVar8,uVar10,0);
            FUN_02b6b2d0(lVar5,uVar11,uVar8,
                         *(undefined8 *)Method_System_DBNull_System_IConvertible_ToDouble__);
            uVar8 = *(undefined8 *)*param_3;
            uVar11 = *(undefined8 *)(*param_3 + 8);
            lVar5 = FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 ,8);
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_04582778;
                thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20));
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x28) = uVar10;
                  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar10);
                  if (2 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_04582768;
                    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
                    if (3 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x38) =
                           *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
                      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38));
                      if (4 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_04582748;
                        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x40));
                        if (5 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x48) = uVar10;
                          thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x48),uVar10);
                          if (6 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_045827c0;
                            thunk_FUN_01f51358();
                            param_1 = (long *)*param_1;
                            if (param_1 == (long *)0x0) {
                              uVar14 = 0;
                            }
                            else {
                              uVar14 = (**(code **)(*param_1 + 0x168))
                                                 (param_1,*(undefined8 *)(*param_1 + 0x170));
                            }
                            if (7 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x58) = uVar14;
                              thunk_FUN_01f51358();
LAB_03fa4748:
                              uVar14 = FUN_0340efe8(lVar5,0);
                              if (*(int *)(*(long *)
                                            Method_System_DBNull_System_IConvertible_ToDecimal__ +
                                          0xe0) == 0) {
                                thunk_FUN_01ee6d7c(*(long *)
                                                  Method_System_DBNull_System_IConvertible_ToDecimal__
                                                  );
                              }
                              auVar16 = FUN_03f8d0c8(uVar14,0);
                              auVar16 = FUN_03f8a724(uVar8,uVar11,auVar16._0_8_,auVar16._8_8_,0);
                              *param_3 = auVar16;
                              thunk_FUN_01f51358(*param_3 + 8,0);
                              return local_70;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_03fa47b0;
            }
          }
          else {
            uVar8 = FUN_02b6b264(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38),
                                 *(undefined8 *)puVar2);
            lVar5 = FUN_02b6b264(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50),
                                 *(undefined8 *)puVar2);
            if (lVar5 != 0) {
              uVar11 = FUN_03f8b518(lVar5,0);
              lVar5 = FUN_03f9ca58(uVar11,0);
              *param_1 = lVar5;
              thunk_FUN_01f51358(param_1,lVar5);
              if ((*param_1 != 0) && (lVar5 = FUN_03f8c2dc(*param_1,0), lVar5 != 0)) {
                FUN_02b6b2d0(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38),uVar8,
                             *(undefined8 *)Method_System_DBNull_System_IConvertible_ToDouble__);
                uVar8 = *(undefined8 *)*param_3;
                uVar11 = *(undefined8 *)(*param_3 + 8);
                lVar5 = FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                     ,7);
                if (lVar5 != 0) {
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_04582778;
                    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20));
                    if (1 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x28) = uVar10;
                      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar10);
                      if (2 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_04582768;
                        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
                        if (3 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x38) =
                               *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
                          thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38));
                          if (4 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_04582748;
                            thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x40));
                            if (5 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x48) = uVar10;
                              thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x48),uVar10);
                              if (6 < *(uint *)(lVar5 + 0x18)) {
                                *(undefined8 *)(lVar5 + 0x50) =
                                     *(undefined8 *)
                                      Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                ;
                                thunk_FUN_01f51358();
                                goto LAB_03fa4748;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_03fa47b0;
                }
              }
            }
          }
          goto LAB_03fa47ac;
        }
        uVar11 = *(undefined8 *)*param_3;
        uVar14 = *(undefined8 *)(*param_3 + 8);
        lVar9 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                             ,7);
        if (lVar9 == 0) goto LAB_03fa47ac;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_03fa47b0;
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04582778;
        thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x20));
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_03fa47b0;
        *(undefined8 *)(lVar9 + 0x28) = uVar10;
        thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x28),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_03fa47b0;
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_045827d0;
        thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x30));
        uVar10 = (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*param_2 + 0x2f0));
        if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_03fa47b0;
        *(undefined8 *)(lVar9 + 0x38) = uVar10;
        thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x38),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_03fa47b0;
        *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_045827d8;
        thunk_FUN_01f51358();
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar13 = *(long *)puVar3;
        }
        if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_03fa47b0;
        *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x58);
        thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x48));
        if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_03fa47b0;
        *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_045827b0;
        thunk_FUN_01f51358();
        uVar10 = FUN_0340efe8(lVar9,0);
        if (*(int *)(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__);
        }
        auVar16 = FUN_03f8d0c8(uVar10,0);
        auVar16 = FUN_03f8a724(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
        *param_3 = auVar16;
        thunk_FUN_01f51358(*param_3 + 8,0);
      }
      uVar7 = (**(code **)(*param_2 + 0x2a8))(param_2,local_68,*(undefined8 *)(*param_2 + 0x2b0));
      if ((uVar7 & 1) != 0) {
        return local_68;
      }
      lVar9 = *param_1;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03fa4b44(lVar9);
      if ((uVar7 & 1) == 0) {
        uVar8 = *(undefined8 *)PTR_DAT_045827e0;
        uVar11 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar14 = *(undefined8 *)PTR_DAT_04582740;
        if (local_68 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)(*local_68 + 0x168))(local_68,*(undefined8 *)(*local_68 + 0x170));
        }
        goto LAB_03fa3ee0;
      }
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar3;
      }
      puVar2 = Method_System_DBNull_System_IConvertible_ToDouble__;
      FUN_02b6b2d0(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)Method_System_DBNull_System_IConvertible_ToDouble__);
      uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      uVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                                 );
      FUN_03f8abf0(uVar11,uVar10,0);
      FUN_02b6b2d0(lVar5,uVar14,uVar11,*(undefined8 *)puVar2);
      uVar11 = *(undefined8 *)*param_3;
      uVar14 = *(undefined8 *)(*param_3 + 8);
      lVar5 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,0xb);
      if (lVar5 == 0) {
LAB_03fa47ac:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_03fa47b0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponseCallback__;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20));
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_04582760;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
      uVar10 = (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*param_2 + 0x2f0));
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x38) = uVar10;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38),uVar10);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_045827b8;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x40));
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x48));
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_04582750;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x50));
      if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x58) = uVar8;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x58),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)PTR_DAT_04582770;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x60));
      if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x68));
      if (*(uint *)(lVar5 + 0x18) < 0xb) goto LAB_03fa47b0;
      *(undefined8 *)(lVar5 + 0x70) =
           *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
      thunk_FUN_01f51358();
      uVar8 = FUN_0340efe8(lVar5,0);
      if (*(int *)(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__);
      }
      auVar16 = FUN_03f8d0c8(uVar8,0);
      auVar16 = FUN_03f8a724(uVar11,uVar14,auVar16._0_8_,auVar16._8_8_,0);
      *param_3 = auVar16;
    }
    thunk_FUN_01f51358(*param_3 + 8,0);
    param_2 = *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70);
  }
  return param_2;
}


