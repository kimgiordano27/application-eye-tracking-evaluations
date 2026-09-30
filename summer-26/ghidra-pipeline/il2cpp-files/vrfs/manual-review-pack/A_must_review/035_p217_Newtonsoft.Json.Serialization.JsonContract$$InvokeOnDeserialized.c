/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized
ENTRY_POINT: 01bb1e28
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01bb1fb4) */

void Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
code_r0x01bb1e28:
  if (!(bool)in_ZR) goto LAB_01bb1e14;
LAB_01bb1e2c:
  puVar2 = (undefined8 *)FUN_015c2a80();
  do {
    (*(code *)*puVar2)();
    iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1a0) + 8))();
    if (-1 < iVar1) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      ICSharpCode_SharpZipLib_Zip_Compression_Inflater__SetInput();
    }
    lVar4 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01bb1dd0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80();
LAB_01bb1dd0:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto code_r0x01bb1ef0;
      lVar4 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar6 == 0) goto LAB_01bb1ec4;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
    if ((*(byte *)(param_3 + 0x132) & 1) == 0) {
      param_3 = FUN_015c2790(param_3);
    }
    param_1 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    if (in_x9 == 0) goto LAB_01bb1e2c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_01bb1e14:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x01bb1e28;
    }
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x25) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_01bb1ee0;
    }
  }
LAB_01bb1ec4:
  puVar2 = (undefined8 *)FUN_015c2a80();
LAB_01bb1ee0:
  (*(code *)*puVar2)();
code_r0x01bb1ef0:
  if (0 < (int)unaff_x21) {
    uVar6 = 0;
    lVar4 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 == 0) goto LAB_01bb1fa4;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_01bb1fa8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (-1 < *(int *)(lVar5 + lVar4)) {
        if (unaff_x22 == 0) {
LAB_01bb1fa4:
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar3 = FUN_01abde3c();
        if ((uVar3 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_01bb1fa4;
                    /* try { // try from 01bb1f44 to 01cb1f47 has its CatchHandler @ 01bb1f64 */
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar6) goto LAB_01bb1fa8;
                    /* try { // try from 01bb1f48 to 01cb1f4b has its CatchHandler @ 01bb1f60 */
                    /* try { // try from 01bb1f4c to 01cb1f4f has its CatchHandler @ 01bb1c04 */
                    /* try { // try from 01bb1f50 to 01cb1f53 has its CatchHandler @ 01bb1f5c */
                    /* try { // try from 01bb1f54 to 01cb1f83 has its CatchHandler @ 01bb1c04 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bb1f50 with catch @ 01bb1f5c
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bb1f48 with catch @ 01bb1f60
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bb1f44 with catch @ 01bb1f64
                        */
          (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120) + 8))();
        }
      }
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bb1e14 with catch @ 01bb1f68
                        */
      uVar6 = uVar6 + 1;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bb1dec with catch @ 01bb1f6c
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bb1db8 with catch @ 01bb1f70
                        */
      lVar4 = lVar4 + 0x10;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bb1d5c with catch @ 01bb1f74
                        */
    } while (unaff_x21 != uVar6);
  }
                    /* try { // try from 01bb1f84 to 01cb1f87 has its CatchHandler @ 01bb2004 */
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -0x48)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


