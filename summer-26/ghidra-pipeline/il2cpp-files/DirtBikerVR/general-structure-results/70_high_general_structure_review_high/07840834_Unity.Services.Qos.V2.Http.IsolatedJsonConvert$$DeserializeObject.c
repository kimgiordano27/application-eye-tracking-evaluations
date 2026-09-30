/*
FUNCTION_NAME: Unity.Services.Qos.V2.Http.IsolatedJsonConvert$$DeserializeObject
ENTRY_POINT: 07840834
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_Qos_V2_Http_IsolatedJsonConvert__DeserializeObject(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo,0)
  ;
  FUN_05fa0540();
  puVar1 = UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo;
  FUN_0675ff58(*(undefined8 *)
                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo,0);
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
  *(undefined8 *)(unaff_x19 + 0xe) = unaff_x21;
  thunk_FUN_03afed3c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 8);
  uVar2 = FUN_078392b4();
  lVar3 = FUN_077e0ec4(uVar9,uVar2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar10 = *(long **)(unaff_x20 + 0x10);
  uVar2 = FUN_078260d0(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar3 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar9 = FUN_078260e4(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar4 = FUN_078260ec(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar3,0);
  uVar6 = 10;
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar6 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar3 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar11 = *(undefined8 *)PTR_DAT_084c7fc0;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)System_Func<TextInfo>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07840a78;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)System_Func<TextInfo>_TypeInfo,0);
LAB_07840a78:
  lVar3 = (*(code *)*puVar5)(plVar10,uVar11,uVar2,uVar9,uVar4,uVar6,puVar5[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo
                     );
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd8898(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar2 = FUN_0587c704(&stack0x00000018,*(undefined8 *)TMPro_FastAction<Object>_TypeInfo);
      uVar9 = FUN_04718284(uVar2,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)
                            System_Func<KeyValuePair<uint,_NetworkPrefab>,_uint>_TypeInfo);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
      FUN_0575071c(uVar4,uVar2,uVar9,
                   *(undefined8 *)System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
      puVar1 = System_Runtime_Serialization_DataNode<ulong>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


