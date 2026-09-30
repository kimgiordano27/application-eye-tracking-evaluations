/*
FUNCTION_NAME: FUN_01a96ab4
ENTRY_POINT: 01a96ab4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 FUN_01a96ab4(long *param_1,void *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long local_190 [2];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 auStack_140 [80];
  uint local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_0377cd47 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2370);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_Create__
                      );
    thunk_FUN_00d48444(StringLiteral_4331);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ConstantBufferBase>_Dispose__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                      );
    thunk_FUN_00d48444(UnityEngine_UI_InputField_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<Vector3>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033efad8);
    thunk_FUN_00d48444(PTR_DAT_033f6068);
    thunk_FUN_00d48444(PTR_DAT_033f0a90);
    thunk_FUN_00d48444(StringLiteral_11626);
    DAT_0377cd47 = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_MoveNext__
  ;
  uStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ValueAsDouble__);
    FUN_016ec5b8(uVar8,uVar9,0);
    uVar9 = thunk_FUN_00d48444(Method_Obi_ObiUtils_Swap<Color>__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar9);
  }
  lVar10 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_033f2370) {
        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
        goto LAB_01a96c10;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(param_1,*(long *)PTR_DAT_033f2370,3);
LAB_01a96c10:
  puVar5 = Method_System_Nullable<Vector3>__ctor__;
  puVar4 = UnityEngine_UI_InputField_TypeInfo;
  puVar3 = PTR_DAT_033f0a90;
  (*(code *)*puVar7)(param_1,puVar7[1]);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01b7a7b4(&local_f0,0x9b83c86,0,0xffffffffffffffff,0);
  uStack_98 = uStack_e8;
  local_90 = local_e0;
  FUN_01b7b3f4(&local_f0,*(undefined8 *)((long)param_2 + 8),&local_a0,*(undefined8 *)puVar5,0,0);
  uStack_98 = uStack_e8;
  local_90 = local_e0;
  FUN_01b7b498(&local_f0,&local_a0,*(undefined8 *)puVar3,(long)*(int *)((long)param_2 + 4),0,0);
  uStack_98 = uStack_e8;
  local_90 = local_e0;
  FUN_01b7b498(&local_f0,&local_a0,*(undefined8 *)puVar4,(long)*(int *)((long)param_2 + 0x10),0,0);
  local_70 = CONCAT44(uStack_ec,local_f0);
  uStack_68 = uStack_e8;
  local_60 = local_e0;
  iVar1 = *(int *)((long)param_2 + 0x18);
  if (iVar1 == 1) {
    lVar10 = (long)*(int *)((long)param_2 + 0x28);
    puVar7 = (undefined8 *)PTR_DAT_033f6068;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        local_190[0] = 0;
        lVar10 = *(long *)((long)param_2 + 0x30);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        local_190[0] = (long)*(int *)(lVar10 + 0x20);
        FUN_01b7b5e0(&local_f0,&local_70,*(undefined8 *)StringLiteral_11626,local_190,
                     *(undefined4 *)((long)param_2 + 0x38),0,0);
      }
      goto LAB_01a96d98;
    }
    lVar10 = 1;
    puVar7 = (undefined8 *)PTR_DAT_033efad8;
  }
  FUN_01b7b498(&local_f0,&local_70,*puVar7,lVar10,0,0);
LAB_01a96d98:
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
  ;
  puVar2 = PTR_DAT_033f02a8;
  memcpy(&local_f0,param_2,0x50);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  memcpy(auStack_140,&local_f0,0x50);
  uVar6 = FUN_01b2bb48(auStack_140,&local_78,0);
  uVar8 = local_78;
  local_150 = local_60;
  uStack_158 = uStack_68;
  local_160 = local_70;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uStack_178 = uStack_158;
  local_180 = local_160;
  local_170 = local_150;
  FUN_01a94354(&local_180,uVar8,uVar6);
  uVar11 = FUN_01b139c4(uVar6,0);
  puVar3 = StringLiteral_4331;
  puVar2 = Method_System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_Create__;
  if ((uVar11 & 1) == 0) {
    local_f0 = uVar6;
    local_88._0_8_ =
         FUN_0112cbf8(&local_f0,
                      *(undefined8 *)
                       Method_System_Collections_Generic_List_Enumerator<ConstantBufferBase>_Dispose__
                     );
  }
  else {
    local_88 = FUN_0112cb00(local_78,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
                           );
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_010a0410(local_88,param_1,*(undefined8 *)puVar2);
  }
  return local_88._0_8_;
}


