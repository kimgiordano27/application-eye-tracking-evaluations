/*
FUNCTION_NAME: FUN_035cd468
ENTRY_POINT: 035cd468
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_9
*/


undefined8 FUN_035cd468(undefined8 param_1,undefined4 param_2,undefined1 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined1 local_48 [4];
  undefined4 local_44;
  
  if ((DAT_04537d15 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(Method_System_ValueTuple<EnumDataUtility_CachedType,_Type>__ctor__);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(
                Method_System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>__ctor__
                );
    FUN_01c5d288(System_Func<Type,_Type>_TypeInfo);
    FUN_01c5d288(Method_System_ValueTuple<byte[],_int,_int>__ctor__);
    FUN_01c5d288(Method_System_ValueTuple<int,_int,_EventModifiers>__ctor__);
    FUN_01c5d288(Method_System_ValueTuple<int,_int,_float>__ctor__);
    FUN_01c5d288(Method_System_ValueTuple<Vector4,_Vector4,_Vector4>__ctor__);
    DAT_04537d15 = 1;
  }
  puVar2 = PTR_DAT_0422fd80;
  if (param_4 == (long *)0x0) {
    plVar4 = (long *)FUN_035b5874(param_1,0);
    plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,2);
    local_44 = param_2;
    lVar5 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_44);
    if (plVar3 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto LAB_035cdcbc;
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar5;
        local_48[0] = param_3;
        lVar5 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,local_48);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
        goto LAB_035cdcbc;
        if (1 < *(uint *)(plVar3 + 3)) {
          plVar3[5] = lVar5;
          if (plVar4 != (long *)0x0) {
            lVar5 = *plVar4;
            uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
            uVar14 = *(undefined8 *)
                      Method_System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>__ctor__
            ;
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_035cdad8;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_01c72498(plVar4,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035cdad8:
            (*(code *)*puVar7)(plVar4,3,uVar14,plVar3,puVar7[1]);
            uVar14 = FUN_03d468e8(param_1,0);
            uVar14 = FUN_035c19e8(param_1,uVar14,1,0);
            return uVar14;
          }
          goto LAB_035cdcb8;
        }
      }
      goto LAB_035cdcb4;
    }
    goto LAB_035cdcb8;
  }
  if (*param_4 != *(long *)PTR_DAT_0422fd80) {
    plVar3 = (long *)FUN_035b5874(param_1,0);
    plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,3);
    uVar14 = *(undefined8 *)Method_System_ValueTuple<Vector4,_Vector4,_Vector4>__ctor__;
    lVar5 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
    if (plVar4 == (long *)0x0) goto LAB_035cdcb8;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_035cdcbc;
    if ((int)plVar4[3] == 0) goto LAB_035cdcb4;
    plVar4[4] = lVar5;
    local_44 = param_2;
    lVar5 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_44);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_035cdcbc;
    if (*(uint *)(plVar4 + 3) < 2) goto LAB_035cdcb4;
    plVar4[5] = lVar5;
    local_48[0] = param_3;
    lVar5 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,local_48);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_035cdcbc;
    if (*(uint *)(plVar4 + 3) < 3) goto LAB_035cdcb4;
    plVar4[6] = lVar5;
    if (plVar3 == (long *)0x0) goto LAB_035cdcb8;
    lVar5 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_035cdab0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar3,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035cdab0:
    pcVar11 = (code *)*puVar7;
    uVar10 = puVar7[1];
    goto LAB_035cdc60;
  }
  puVar8 = (undefined4 *)thunk_FUN_01c49834(param_4);
  lVar5 = FUN_0357c7e0(*puVar8,0);
  puVar1 = PTR_DAT_0422f9e8;
  if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
  }
  uVar12 = FUN_03d4dc54(0,lVar5,0);
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_03d4dd60(lVar5,0);
    if ((uVar12 & 1) == 0) goto LAB_035cd984;
    if (lVar5 == 0) goto LAB_035cdcb8;
    lVar5 = FUN_0230c12c(lVar5,*(undefined8 *)
                                Method_System_ValueTuple<EnumDataUtility_CachedType,_Type>__ctor__);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar1);
    }
    uVar12 = FUN_03d4dc54(0,lVar5,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_03d4dd60(lVar5,0);
      if ((uVar12 & 1) != 0) {
        plVar4 = (long *)FUN_035b5874(param_1,0);
        plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,3);
        if (plVar3 == (long *)0x0) goto LAB_035cdcb8;
        lVar6 = thunk_FUN_01c495e4(param_4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar6 != 0) {
          if ((int)plVar3[3] != 0) {
            plVar3[4] = (long)param_4;
            local_44 = param_2;
            lVar6 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_44);
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
            goto LAB_035cdcbc;
            if (1 < *(uint *)(plVar3 + 3)) {
              plVar3[5] = lVar6;
              local_48[0] = param_3;
              lVar6 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,local_48);
              if ((lVar6 != 0) &&
                 (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
              goto LAB_035cdcbc;
              if (2 < *(uint *)(plVar3 + 3)) {
                plVar3[6] = lVar6;
                if (plVar4 != (long *)0x0) {
                  lVar6 = *plVar4;
                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  uVar14 = *(undefined8 *)Method_System_ValueTuple<int,_int,_EventModifiers>__ctor__
                  ;
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) ==
                          *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_035cdc90;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)
                           FUN_01c72498(plVar4,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035cdc90:
                  (*(code *)*puVar7)(plVar4,3,uVar14,plVar3,puVar7[1]);
                  if (lVar5 != 0) {
                    return *(undefined8 *)(lVar5 + 0x40);
                  }
                }
                goto LAB_035cdcb8;
              }
            }
          }
          goto LAB_035cdcb4;
        }
        goto LAB_035cdcbc;
      }
    }
    plVar3 = (long *)FUN_035b5874(param_1,0);
    plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,3);
    if (plVar4 == (long *)0x0) goto LAB_035cdcb8;
    lVar5 = thunk_FUN_01c495e4(param_4,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar5 == 0) goto LAB_035cdcbc;
    if ((int)plVar4[3] == 0) goto LAB_035cdcb4;
    plVar4[4] = (long)param_4;
    local_44 = param_2;
    lVar5 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_44);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_035cdcbc;
    if (*(uint *)(plVar4 + 3) < 2) goto LAB_035cdcb4;
    plVar4[5] = lVar5;
    local_48[0] = param_3;
    lVar5 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,local_48);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_035cdcbc;
    if (*(uint *)(plVar4 + 3) < 3) goto LAB_035cdcb4;
    plVar4[6] = lVar5;
    if (plVar3 == (long *)0x0) goto LAB_035cdcb8;
    lVar6 = *plVar3;
    lVar5 = *(long *)GameAnalyticsSDK_State_GAState_TypeInfo;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar14 = *(undefined8 *)Method_System_ValueTuple<int,_int,_float>__ctor__;
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar5) goto LAB_035cdc3c;
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
  }
  else {
LAB_035cd984:
    plVar3 = (long *)FUN_035b5874(param_1,0);
    plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,3);
    if (plVar4 == (long *)0x0) {
LAB_035cdcb8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar5 = thunk_FUN_01c495e4(param_4,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar5 == 0) {
LAB_035cdcbc:
      uVar14 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar14,0);
    }
    if ((int)plVar4[3] == 0) {
LAB_035cdcb4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar4[4] = (long)param_4;
    local_44 = param_2;
    lVar5 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_44);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_035cdcbc;
    if (*(uint *)(plVar4 + 3) < 2) goto LAB_035cdcb4;
    plVar4[5] = lVar5;
    local_48[0] = param_3;
    lVar5 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,local_48);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_035cdcbc;
    if (*(uint *)(plVar4 + 3) < 3) goto LAB_035cdcb4;
    plVar4[6] = lVar5;
    if (plVar3 == (long *)0x0) goto LAB_035cdcb8;
    lVar6 = *plVar3;
    lVar5 = *(long *)GameAnalyticsSDK_State_GAState_TypeInfo;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar14 = *(undefined8 *)Method_System_ValueTuple<byte[],_int,_int>__ctor__;
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar5) goto LAB_035cdc3c;
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
  }
  puVar7 = (undefined8 *)FUN_01c72498(plVar3,lVar5,1);
LAB_035cdc4c:
  pcVar11 = (code *)*puVar7;
  uVar10 = puVar7[1];
LAB_035cdc60:
  (*pcVar11)(plVar3,2,uVar14,plVar4,uVar10);
  return 0;
LAB_035cdc3c:
  puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
  goto LAB_035cdc4c;
}


