/*
FUNCTION_NAME: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo$$InitSerialize
ENTRY_POINT: 02fd6c58
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitSerialize
               (long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long param_8,long *param_9)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_58;
  
  if ((DAT_03ef395b & 1) == 0) {
    FUN_01c5c92c(PTR_System_Runtime_Serialization_FormatterServices_TypeInfo_03cbb6c8);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_ISerializable_TypeInfo_03cbb8a8);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_ISerializationSurrogate_TypeInfo_03cbb808);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_ISurrogateSelector_TypeInfo_03cbb520);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_SerializationInfo_TypeInfo_03cbbd80);
    DAT_03ef395b = 1;
  }
  local_58 = 0;
  *(undefined8 *)(param_1 + 0x50) = param_4;
  *(undefined8 *)(param_1 + 0x58) = param_5;
  thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x50),0);
  *(long *)(param_1 + 0x18) = param_2;
  thunk_FUN_01cc8040((long *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x60) = param_6;
  thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x60),param_6);
  if (param_2 != 0) {
    lVar3 = System_Object__GetType(param_2,0);
    plVar8 = (long *)(param_1 + 0x20);
    *plVar8 = lVar3;
    thunk_FUN_01cc8040(plVar8,lVar3);
    if (*plVar8 != 0) {
      uVar4 = System_Type__get_IsArray(*plVar8,0);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x2b) = 1;
        System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitNoMembers(param_1);
        return;
      }
      if (param_9 != (long *)0x0) {
        (**(code **)(*param_9 + 0x178))
                  (param_9,*(undefined8 *)(param_1 + 0x20),param_1 + 0x80,param_1 + 0x78,
                   *(undefined8 *)(*param_9 + 0x180));
      }
      if ((param_8 != 0) && (*(long *)(param_8 + 0x48) != 0)) {
        System_Runtime_Serialization_SerializationObjectManager__RegisterObject
                  (*(long *)(param_8 + 0x48),param_2,0);
        if (param_3 != (long *)0x0) {
          lVar3 = *param_3;
          lVar11 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)PTR_System_Runtime_Serialization_ISurrogateSelector_TypeInfo_03cbb520) {
                puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02fd6e10;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01c8cb54(param_3,*(long *)
                                         PTR_System_Runtime_Serialization_ISurrogateSelector_TypeInfo_03cbb520
                                ,0);
LAB_02fd6e10:
          lVar3 = (*(code *)*puVar5)(param_3,lVar11,param_4,param_5,&local_58,puVar5[1]);
          plVar10 = (long *)(param_1 + 0x48);
          *plVar10 = lVar3;
          thunk_FUN_01cc8040(plVar10,lVar3);
          if (lVar3 != 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            uVar6 = thunk_FUN_01c8fc48(*(undefined8 *)
                                        PTR_System_Runtime_Serialization_SerializationInfo_TypeInfo_03cbbd80
                                      );
            System_Runtime_Serialization_SerializationInfo___ctor(uVar6,uVar9,param_7,0);
            puVar5 = (undefined8 *)(param_1 + 0x30);
            *puVar5 = uVar6;
            thunk_FUN_01cc8040(puVar5,uVar6);
            if (*(long *)(param_1 + 0x20) != 0) {
              uVar4 = System_Type__get_IsPrimitive(*(long *)(param_1 + 0x20),0);
              if ((uVar4 & 1) == 0) {
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) goto LAB_02fd7094;
                lVar3 = *plVar10;
                uVar6 = *puVar5;
                uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar4 != 0) {
                  piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        *(long *)
                         PTR_System_Runtime_Serialization_ISerializationSurrogate_TypeInfo_03cbb808)
                    {
                      puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_02fd7054;
                    }
                    uVar4 = uVar4 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)
                         FUN_01c8cb54(plVar10,*(long *)
                                               PTR_System_Runtime_Serialization_ISerializationSurrogate_TypeInfo_03cbb808
                                      ,0);
LAB_02fd7054:
                (*(code *)*puVar5)(plVar10,param_2,uVar6,param_4,param_5,puVar5[1]);
              }
              System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitSiWrite(param_1);
              return;
            }
            goto LAB_02fd7094;
          }
        }
        puVar1 = PTR_System_Runtime_Serialization_ISerializable_TypeInfo_03cbb8a8;
        lVar3 = thunk_FUN_01c8fb4c(param_2,*(undefined8 *)
                                            PTR_System_Runtime_Serialization_ISerializable_TypeInfo_03cbb8a8
                                  );
        if (lVar3 == 0) {
          System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitMemberInfo(param_1);
        }
        else {
          plVar10 = (long *)*plVar8;
          if (plVar10 == (long *)0x0) goto LAB_02fd7094;
          uVar4 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
          if ((uVar4 & 1) == 0) {
            uVar6 = thunk_FUN_01cb9718(PTR_object___TypeInfo_03cb62b8);
            uVar6 = FUN_01c5ca18(uVar6,2);
            plVar10 = (long *)*plVar8;
            FUN_01985584(plVar10);
            uVar9 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
            FUN_01985584(uVar6);
            FUN_019867c8(uVar6,uVar9);
            FUN_019867fc(uVar6,0,uVar9);
            plVar8 = (long *)*plVar8;
            FUN_01985584(plVar8);
            plVar8 = (long *)(**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0))
            ;
            FUN_01985584();
            uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            FUN_019867c8(uVar6,uVar9);
            FUN_019867fc(uVar6,1,uVar9);
            uVar9 = thunk_FUN_01cb9718(PTR_StringLiteral_5847_03cbb718);
            uVar6 = System_Environment__GetResourceString(uVar9,uVar6,0);
            thunk_FUN_01cb9718(
                              PTR_System_Runtime_Serialization_SerializationException_TypeInfo_03cb9098
                              );
            uVar9 = thunk_FUN_01c8fc48();
            System_Runtime_Serialization_SerializationException___ctor(uVar9,uVar6,0);
            uVar6 = thunk_FUN_01cb9718(
                                      PTR_Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_InitSerialize___03cbbd88
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01c5ca98(uVar9,uVar6);
          }
          lVar3 = *plVar8;
          if (*(int *)(*(long *)PTR_System_Runtime_Serialization_FormatterServices_TypeInfo_03cbb6c8
                      + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar2 = System_Runtime_Serialization_FormatterServices__UnsafeTypeForwardersIsEnabled(0);
          uVar6 = thunk_FUN_01c8fc48(*(undefined8 *)
                                      PTR_System_Runtime_Serialization_SerializationInfo_TypeInfo_03cbbd80
                                    );
          System_Runtime_Serialization_SerializationInfo___ctor
                    (uVar6,lVar3,param_7,(uVar2 ^ 0xffffffff) & 1,0);
          puVar5 = (undefined8 *)(param_1 + 0x30);
          *puVar5 = uVar6;
          thunk_FUN_01cc8040(puVar5,uVar6);
          uVar9 = *(undefined8 *)puVar1;
          uVar6 = *puVar5;
          lVar3 = thunk_FUN_01c8fb4c(param_2,uVar9);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54(param_2,uVar9);
          }
          lVar3 = *(long *)puVar1;
          plVar8 = (long *)thunk_FUN_01c8fb4c(param_2,lVar3);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54(param_2,lVar3);
          }
          lVar11 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar3) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02fd7014;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_01c8cb54(plVar8,lVar3,0);
LAB_02fd7014:
          (*(code *)*puVar5)(plVar8,uVar6,param_4,param_5,puVar5[1]);
          System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitSiWrite(param_1);
        }
        System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__CheckTypeForwardedFrom
                  (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x80));
        return;
      }
    }
  }
LAB_02fd7094:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


