/*
FUNCTION_NAME: FUN_015d1080
ENTRY_POINT: 015d1080
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_file_logging_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_015d1080(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar2 = Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__;
  puVar1 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
  if ((DAT_03777edd & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(OVRPlugin_TrackingConfidence___TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__);
    thunk_FUN_00d48444(Mono_Security_Interface_TlsException_TypeInfo);
    DAT_03777edd = 1;
  }
  uVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,0x15);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 015d1110 to 016d119b has its CatchHandler @ 015d13b4 */
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  plVar4 = (long *)FUN_0162e1d4(0);
  puVar2 = Mono_Security_Interface_TlsException_TypeInfo;
  puVar1 = OVRPlugin_TrackingConfidence___TypeInfo;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x248))(plVar4,2,*(undefined8 *)(*plVar4 + 0x250));
    if ((param_1 == 0) || (*(int *)(param_1 + 0x10) < 1)) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar1;
      }
      FUN_0179eccc(*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0,uVar3,0,8,0);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_015d13ac(param_1,0);
      (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x200));
      plVar6 = (long *)(**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
      if (plVar6 == (long *)0x0) goto LAB_015d13a8;
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_015d123c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar6,lVar8,3);
LAB_015d123c:
      (*(code *)*puVar7)(plVar6,uVar5,0,8,uVar3,0,puVar7[1]);
    }
    if ((param_1 == 0) || (*(int *)(param_1 + 0x10) < 8)) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar1;
      }
      FUN_0179eccc(*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0,uVar3,8,8,0);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_015d13ac(param_1,7);
      (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x200));
      plVar6 = (long *)(**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
      if (plVar6 == (long *)0x0) goto LAB_015d13a8;
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_015d134c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar6,lVar8,3);
LAB_015d134c:
      (*(code *)*puVar7)(plVar6,uVar5,0,8,uVar3,8,puVar7[1]);
    }
    FUN_0163bce8(plVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_015d1514(param_2,uVar3);
    return;
  }
LAB_015d13a8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


