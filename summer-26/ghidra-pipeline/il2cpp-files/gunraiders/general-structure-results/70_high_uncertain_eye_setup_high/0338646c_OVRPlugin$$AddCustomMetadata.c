/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 0338646c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__AddCustomMetadata(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  thunk_FUN_01c1d1e8();
  uVar6 = FUN_0320e6fc();
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar7 = (long *)FUN_033a78fc(0);
    if (plVar7 == (long *)0x0) goto LAB_0338650c;
    uVar8 = (**(code **)(*plVar7 + 0x188))();
    *(undefined8 *)(unaff_x19 + 0x108) = uVar8;
    uVar8 = FUN_03392404();
    uVar4 = (**(code **)(*unaff_x21 + 0x1b8))();
    FUN_0230a718(uVar8,uVar4,*unaff_x24);
  }
  puVar2 = Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__;
  uVar8 = FUN_03386f38();
  uVar6 = FUN_032106f8(uVar8,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_033870f4();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar1 = UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_var;
  if (unaff_x20 != (long *)0x0) {
    uVar4 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    uVar8 = (**(code **)(*unaff_x20 + 0x2d8))();
    iVar3 = FUN_0247a4d4(uVar4,uVar8,*(undefined8 *)puVar1);
    puVar1 = Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_MoveNext__;
    puVar2 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_MoveNext__;
    if (iVar3 != -1) {
      plVar7 = (long *)FUN_0338fba4();
      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_0338f5a0(uVar8,0,*(undefined8 *)puVar2,0);
      if (plVar7 == (long *)0x0) goto LAB_0338650c;
      lVar9 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
             ) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_03386414;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01c72498(plVar7,*(long *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                            ,2);
LAB_03386414:
      (*(code *)*puVar5)(plVar7,uVar8,puVar5[1]);
    }
    return;
  }
LAB_0338650c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


