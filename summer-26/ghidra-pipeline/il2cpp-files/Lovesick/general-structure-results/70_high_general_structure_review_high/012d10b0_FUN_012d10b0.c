/*
FUNCTION_NAME: FUN_012d10b0
ENTRY_POINT: 012d10b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_4;telemetry_or_network_hits_2
*/


void FUN_012d10b0(long *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_68;
  long lStack_60;
  long *local_58;
  undefined1 *puStack_50;
  undefined1 local_44 [4];
  
  if ((DAT_037765eb & 1) == 0) {
    thunk_FUN_00d48444(System_Xml_TextEncodedRawTextWriter_TypeInfo);
    DAT_037765eb = 1;
  }
  puVar2 = System_Xml_TextEncodedRawTextWriter_TypeInfo;
  if (param_1 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar12 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar11 = thunk_FUN_00d48444(
                               UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                               );
    FUN_016ec5b8(uVar12,uVar11,0);
  }
  else {
    lVar7 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_012d1148;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_00d59724(param_1,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,2);
LAB_012d1148:
    plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
    lVar7 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if ((plVar4 != (long *)0x0) && (*plVar4 == lVar7)) {
      lVar7 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      puVar3 = (undefined8 *)thunk_FUN_00d32ed4(plVar4,*(long *)(lVar7 + 0x80) + 0x20);
      lVar7 = *(long *)(param_2 + 0x20);
      uVar12 = *puVar3;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      plVar5 = (long *)thunk_FUN_00d32ed4(plVar4,*(long *)(lVar7 + 0x80) + 0x40);
      lVar7 = *(long *)(param_2 + 0x20);
      lVar13 = *plVar5;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      puVar3 = (undefined8 *)thunk_FUN_00d32ed4(plVar4,*(long *)(lVar7 + 0x80) + 0x20);
      *puVar3 = 0;
      lVar7 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(lVar7 + 0x80) + 0x40;
      FUN_00da4f60(lVar7,8);
      puVar3 = (undefined8 *)thunk_FUN_00d32ed4(plVar4,lVar7);
      *puVar3 = 0;
      if (lVar13 != 0) {
        lVar7 = *param_1;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_012d12e0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar2,3);
LAB_012d12e0:
        uVar9 = (*(code *)*puVar3)(param_1,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = *(long *)(param_2 + 0x20);
          uVar1 = *(ushort *)(lVar8 + 0x132);
          lVar7 = lVar8;
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_00d5941c(lVar8);
            uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x132);
            lVar7 = *(long *)(param_2 + 0x20);
          }
          uVar11 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
          puStack_50 = local_44;
          local_44[0] = 1;
          local_68 = uVar12;
          lStack_60 = lVar13;
          local_58 = param_1;
          (**(code **)(lVar7 + 0x10))(uVar11,lVar7,plVar4,&local_68,local_44);
        }
        return;
      }
    }
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar12 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar11 = thunk_FUN_00d48444(PTR_DAT_033eeb80);
    uVar6 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
    FUN_016ec624(uVar12,uVar11,uVar6,0);
  }
  uVar11 = thunk_FUN_00d48444(PTR_DAT_033f3018);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar12,uVar11);
}


