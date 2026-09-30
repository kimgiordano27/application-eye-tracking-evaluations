/*
FUNCTION_NAME: UnityEngine.PhysicsSceneExtensions2D$$GetPhysicsScene2D
ENTRY_POINT: 025ec36c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void UnityEngine_PhysicsSceneExtensions2D__GetPhysicsScene2D
               (float param_1,long param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_037832af & 1) == 0) {
    thunk_FUN_00d48444(FullSerializer_fsDirectConverter_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1324);
    thunk_FUN_00d48444(System_Collections_Generic_List<SongItem_MidiNote>_TypeInfo);
    thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaAttribute___TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_037832af = 1;
  }
  if (param_3 == 0) {
LAB_025ec68c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar5 = FUN_028871a0(param_3,0);
  if (((uVar5 & 1) != 0) && ((param_4 != 1 || (iVar4 = FUN_0266752c(0), iVar4 != 1)))) {
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_0268b4e0(uVar7,0,0);
    puVar2 = System_Xml_Schema_XmlSchemaAttribute___TypeInfo;
    if ((uVar5 & 1) == 0) {
      if (*(char *)(param_3 + 0x141) == '\0') {
        if (*(long *)(param_2 + 0x30) == 0) goto LAB_025ec68c;
        if ((*(char *)(param_3 + 0x140) != '\0') &&
           (param_1 = (float)*(int *)(*(long *)(param_2 + 0x30) + 0x34) * param_1,
           fVar9 = (float)*(undefined8 *)(param_3 + 0x110) - (float)*(undefined8 *)(param_3 + 0x100)
           , fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x110) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(param_3 + 0x100) >> 0x20),
           fVar9 * fVar9 + fVar10 * fVar10 < param_1 * param_1)) {
          return;
        }
        lVar6 = *(long *)(param_2 + 0xd0);
        uVar7 = *(undefined8 *)(param_3 + 0x40);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),uVar7,param_3,*(undefined8 *)(lVar6 + 0x28));
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_0377591e == '\0') {
          thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaAttribute___TypeInfo);
          DAT_0377591e = '\x01';
        }
        puVar3 = FullSerializer_fsDirectConverter_TypeInfo;
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar2;
        }
        FUN_010e0b54(uVar7,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38),
                     *(undefined8 *)puVar3);
        *(undefined1 *)(param_3 + 0x141) = 1;
      }
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      uVar8 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_02681b9c(uVar7,uVar8,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(param_2 + 0xb0);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),uVar7,param_3,*(undefined8 *)(lVar6 + 0x28));
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03775920 == '\0') {
          thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaAttribute___TypeInfo);
          DAT_03775920 = '\x01';
        }
        puVar1 = System_Collections_Generic_List<SongItem_MidiNote>_TypeInfo;
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar2;
        }
        FUN_010e0b54(uVar7,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20),
                     *(undefined8 *)puVar1);
        *(undefined1 *)(param_3 + 0xf8) = 0;
        FUN_02887308(param_3,0,0);
        *(undefined8 *)(param_3 + 0x38) = 0;
      }
      lVar6 = *(long *)(param_2 + 0xd8);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(param_3 + 0x40),param_3,
                   *(undefined8 *)(lVar6 + 0x28));
      }
      uVar7 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377591c == '\0') {
        thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaAttribute___TypeInfo);
        DAT_0377591c = '\x01';
      }
      puVar1 = StringLiteral_1324;
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar2;
      }
      FUN_010e0b54(uVar7,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x40),
                   *(undefined8 *)puVar1);
      return;
    }
  }
  return;
}


